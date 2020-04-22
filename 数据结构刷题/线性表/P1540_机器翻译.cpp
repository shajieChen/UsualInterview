/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>  
#include <algorithm>
#include <vector>
using namespace std; 

bool findInput(std::vector<int> vecResult , int iElement)
{
    std::vector<int>::iterator it = std::find(vecResult.begin() , vecResult.end() , iElement);
    if(it != vecResult.end())
    {
        return true ;
    }
    return false ; 
}

void buildVec(std::vector<int> &vecResult ,int amount , int iTime)
{
    int iInput = 0 ; 
    int iCount = 0 ; 
    for(int i = 0 ; i < iTime ; i++)
    {
        cin >> iInput ;
        if(findInput(vecResult , iInput) == false)
        {
            if(vecResult.size() >= 3 )
            {
                vecResult.erase(vecResult.begin()) ; 
            }
            vecResult.push_back(iInput);
            iCount ++;  
        }
        else 
        {
            continue;  
        }
    } 
    std::cout << iCount << std::endl; 
}


int main(int argc, char const *argv[])
{
    
    int m, n = 0 ; 
    cin >> m >> n ;  
    std::vector<int> vecResult ; 
    buildVec(vecResult , m , n); 
    return 0;
}
