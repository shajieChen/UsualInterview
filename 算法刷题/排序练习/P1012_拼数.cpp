/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;  
unsigned GetNumberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}


int main(int argc, char const *argv[])
{  
    unsigned int n = 0 ;
    unsigned int iCurUsrInput = 0;
    std::vector<int> iUsrInputCollection ;  
    cin >> n ;
    /*Get the Usr Input Collection*/ 
    for(int i = 0; i < n ; i++)
    {
        cin >> iCurUsrInput ; 
        iUsrInputCollection.push_back(iCurUsrInput);   
    }
    
    return 0 ;  
}
