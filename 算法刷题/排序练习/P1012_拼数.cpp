/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;   
 
template <typename T>
void PrintVector(std::vector<T> in_vecotr)
{
    auto it = in_vecotr.begin() ; 
    for(;it != in_vecotr.end(); it++)
    {
        std::cout << *it ; 
    }
    std::cout << std::endl; 
}
bool comp(string a, string b) 
{
    if((a + b) > (b + a ))
    {
        return true ; 
    }
    return false;  
}

int main(int argc, char const *argv[])
{  
    unsigned int n = 0 ; 
    string szUsrInput ;  
    std::vector<string> vecStrings  ; 
    cin >> n ;
    /*Get the Usr Input Collection*/ 
    for(int i = 0; i < n ; i++)
    {
        cin >> szUsrInput; 
        vecStrings.push_back(szUsrInput); 
    }
    sort(vecStrings.begin(), vecStrings.end(), comp);
    PrintVector(vecStrings) ; 
    


    return 0 ;  
}
