/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

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
