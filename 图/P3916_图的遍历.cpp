/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  



void DFS(std::vector<std::vector<int>> &DirMap,int *vecResult , int D, int path)
{
    if(vecResult[D]) 
        return;  
    vecResult[D] = path;  
    for(int i = 0; i < DirMap[D].size() ; i++)
    {
         DFS(DirMap,  vecResult , DirMap[D][i] , path);  
    }

}



int main(int argc, char const *argv[])
{   
    int N, M = 0 ;  
    int tmpS, tmpD = 0 ; 
    std::vector<std::vector<int>> DirMap ; 
    int Result[10000] ;  
    cin >> N >> M;

    for(int i = 0 ; i < M ; i++)
    {   
        cin >> tmpS >> tmpD ; 
        DirMap[tmpD].push_back(tmpS);
    }   

    for(int i = N; i != 0; i--)
    {
        DFS(DirMap, Result , i ,i);
    }


    return 0 ;  
}