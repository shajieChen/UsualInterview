/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

int main(int argc, char const *argv[])
{  
    int n = 0 ; 
    int numCountry = 1 ; 
    cin >> n ; 
    for(int i = 0 ; i < n ; i ++)
        numCountry = numCountry * 2 ; 

    std::cout << "numCountry: " << numCountry << std::endl;

    return 0 ;  
}
