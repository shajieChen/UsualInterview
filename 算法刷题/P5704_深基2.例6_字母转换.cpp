/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <algorithm>
using namespace std; 
int main(int argc, char const *argv[])
{ 
    string szInput= ""; 
    cin >> szInput  ; 
    transform(szInput.begin(),szInput.end(),szInput.begin(),::toupper);
    std::cout << szInput << std::endl;
    return 0 ;  
}
