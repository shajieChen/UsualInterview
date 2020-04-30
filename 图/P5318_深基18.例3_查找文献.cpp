/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <queue>
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

void DFS(int x, std::vector<Edge> edgeVec) 
{
    vis1[x] = true; 
    std::cout << x << " " ;  
    for(int i = 0 ; i < s[x].size() ; i ++ )
    {
        int pointTo = edgeVec[s[x][i]].iPointTo;  
        if(!vis1[pointTo])
        {
            DFS(pointTo, edgeVec);
        }
    }
}

void BFS(int x , std::vector<Edge> edgeVec) 
{
    std::queue<int> q;  
    q.push(x);
    std::cout << x << " " ; 
    vis2[x] = 1 ; 
    while (!q.empty())
    {
        int fro = q.front();
        for(int i = 0 ; i < s[fro].size() ; i++)
        {
            int pointTo = edgeVec[s[fro][i]].iPointTo; 
            if(!vis2[pointTo])
            {
                q.push(pointTo);
                cout << pointTo << " ";  
                vis2[pointTo] = 1 ; 
            }
        }
        q.pop(); 
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
    for(int i = 0 ; i < iLines ; i ++ )
    {
        s[edgeVec[i].iPointFrom].push_back(i);
    } 
    DFS(1, edgeVec);
    cout<<endl;
    BFS(1, edgeVec);

    return 0 ;  
}
