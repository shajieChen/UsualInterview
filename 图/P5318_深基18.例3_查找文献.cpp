/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  
std::vector<int> s[10000] ; 
bool vis1[100001] = {0} , vis2[100001] = {0}; 
struct Edge
{
    int iPointFrom ,iPointTo; 
};
bool cmp(Edge a, Edge b) 
{
    if(a.iPointTo == b.iPointTo)
        return a.iPointFrom < b.iPointFrom;  
    else 
        return a.iPointTo < b.iPointTo  ; 
}


void debugVector(std::vector<Edge> edgeVec) 
{
    std::vector<Edge>::iterator it = edgeVec.begin() ; 
    for(;it != edgeVec.end(); it++ )
    {
        std::cout << "From: " << it->iPointFrom << "To: " << it->iPointTo << std::endl; 
    }
} 
int main(int argc, char const *argv[])
{    
    int iNum, iLines ; 
    int iTPointFrom, iTPointTo = 0 ; 
    std::vector<Edge> edgeVec  ;  
    cin >> iNum >> iLines; 
    for(int i = 0;  i < iLines ; i++)
    {
        cin >> iTPointFrom >> iTPointTo ; 
        edgeVec.push_back({iTPointFrom , iTPointTo}); 
    }
    std::sort(edgeVec.begin() , edgeVec.end(),cmp );
    // debugVector(edgeVec);
    for(int i = 0 ; i < m ; i ++ )
    {
        s[edgeVec[i].iPointFrom].push_back(i);
    } 

    cout<<endl;


    return 0 ;  
}
