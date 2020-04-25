/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  
int iMaxD = -1; 
struct Node
{
    int iLeft, iRight;  
}; 

void DFS( Node nodeVec[], int iID , int iDepth) 
{
    if(iID == 0) 
        return ; 
    if(iDepth > iMaxD)
        iMaxD = iDepth;  
    DFS(nodeVec, nodeVec[iID].iLeft, iDepth + 1);
    DFS(nodeVec, nodeVec[iID].iRight , iDepth + 1);
}

int main(int argc, char const *argv[])
{   
    int n = 0 ; 
    Node nodevec[1000000] ; 
    cin >> n ;
    Node tmpNode ;  

    for(int i = 1 ; i <= n ; i++) 
    {
        cin >>  nodevec[i].iLeft >> nodevec[i].iRight ; 

    }
    DFS(nodevec, 1 , 1);

    std::cout << iMaxD << std::endl; 

    return 0 ;  
}
