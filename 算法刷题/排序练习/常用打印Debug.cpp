/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

void PrintVector(std::vector<int> in_vecotr)
{
    std::vector<int>::iterator it = in_vecotr.begin() ; 
    for(;it != in_vecotr.end(); it++)
    {
        std::cout << *it << " " ; 
    }
    std::cout << std::endl; 
}

template <typename T>
void PrintSet(const std::set<T> printedSet)
{
    auto it = printedSet.begin() ; 
    for(;it != printedSet.end() ; it++)
    {
        std::cout << *it << ' ' ; 
    }   
    std::cout <<std::endl; 
} 



int main(int argc, char const *argv[])
{  
 
    return 0 ;  
}
