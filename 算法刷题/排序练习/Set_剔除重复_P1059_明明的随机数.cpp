/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <set>
#include <algorithm>  
using namespace std ; 
 
void PrintSet(const std::set<int> printedSet)
{
    std::set<int>::iterator it = printedSet.begin() ; 
    for(;it != printedSet.end() ; it++)
    {
        std::cout << *it << ' ' ; 
    }   
    std::cout <<std::endl; 
} 



int main(int argc, char const *argv[])
{   
    int iNum = 0 ;
    int iInputNum =  0 ; 
    std::set<int> randCol;   
    cin >> iNum ; 
    for(int i = 0 ; i < iNum;  i++)
    {
        cin >> iInputNum ;  
        randCol.insert(iInputNum);
    }
    std::cout << randCol.size() << std::endl ; 
    PrintSet(randCol) ; 
    return 0 ;  
}
