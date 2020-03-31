/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <algorithm>
using namespace std; 
int main(int argc, char const *argv[])
{ 
    string input = ""; 
    cin >> input ; 
    int length = input.size();
    for(int i = length - 1; i >= 0  ; i -- )
    {
        cout << input[i]  ; 
    }
    return 0 ;  
}
