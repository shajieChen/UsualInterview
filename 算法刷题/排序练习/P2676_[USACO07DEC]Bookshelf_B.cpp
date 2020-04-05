/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;   
bool CompGreater(int a, int b )
{
    return a > b ; 
}

int main(int argc, char const *argv[])
{  
    unsigned int n = 0 ;
    unsigned int iHeight =0 ; 
    unsigned int iResult = 0; 
    unsigned int iCount = 0 ; 
    unsigned int iCurUsrInput = 0;
    std::vector<int> iUsrInputCollection ;  
    cin >> n  >> iHeight;
    /*Get the Usr Input Collection*/ 
    for(int i = 0; i < n ; i++)
    {
        cin >> iCurUsrInput ; 
        iUsrInputCollection.push_back(iCurUsrInput);   
    }
    sort(iUsrInputCollection.begin(), iUsrInputCollection.end() , CompGreater);
    // PrintVector(iUsrInputCollection);
    while (iResult < iHeight)
    {
        iResult += iUsrInputCollection[iCount] ;
        iCount += 1;  
    }
    std::cout << iCount << std::endl;  
    
    return 0 ;  
}
