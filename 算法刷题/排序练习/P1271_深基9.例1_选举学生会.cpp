/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

int main(int argc, char const *argv[])
{ 
    int n, m = 0 ; 
    int iVote = 0 ; 
    cin >> n >> m ; 
    std::vector<int> vVoteCollection; 
    for(int i = 0 ; i < m ; i++)
    {
        cin >> iVote ; 
        vVoteCollection.push_back(iVote); 
    }
    sort(vVoteCollection.begin() , vVoteCollection.end()); 
    std::vector<int>::iterator it = vVoteCollection.begin() ; 
    for(;it != vVoteCollection.end(); it++)
    {
        std::cout << *it << ' ' ; 
    }
    return 0 ;  
}
