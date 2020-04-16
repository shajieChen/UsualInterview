/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;  
 

template <typename T>
void PrintVector(std::vector<T> in_vecotr)
{
    auto it = in_vecotr.begin() ; 
    for(;it != in_vecotr.end(); it++)
    {
        std::cout << *it << std::endl ; 
    } 
}
int GetDataFromCollection(std::map<int, std::map<int, int> > mapData, int x, int y) 
{ 
    return mapData[x][y] ; 
}

 int main(int argc, char const *argv[])
 {
     std::map<int , std::map<int, int> > colleciton ; 
     std::vector<int> vecResult ; 
     unsigned int n, q = 0 ; 
     unsigned int x, y, k, z = 0 ;
     cin >> n >> q ; 
     for(size_t i = 0 ; i < q ; i++)
     {
        cin >> x >> y >> z ; 
        if(x == 1 )
        {
            cin >> z ; 
            colleciton[y][k] = z ; 
        }
        else if (x == 2 )
        { 
            vecResult.push_back(GetDataFromCollection(colleciton ,y ,k)) ; 
        }
     }
     PrintVector(vecResult);

     
     return 0;
 }
 