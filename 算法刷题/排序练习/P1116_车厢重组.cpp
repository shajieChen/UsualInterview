/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

int BubbleSort(std::vector<int> &InputVector)
{
    int iCount = 0 ;  
    for(std::size_t j  = 0 ; j < InputVector.size() - 1; j++)
    for(std::size_t i  = 0 ; i < InputVector.size() - 1; i++)
    {
        if(InputVector[i] > InputVector[i+1])
        {
            std::swap(InputVector[i] , InputVector[i+1]);
            iCount = iCount + 1 ; 
        }    
    }
    return iCount;  
}

 

int main(int argc, char const *argv[])
{  
    unsigned int n = 0 ;
    unsigned int iCurUsrInput = 0;
    unsigned int iResult = 0 ; 
    std::vector<int> iUsrInputCollection ;  
    cin >> n ;
    /*Get the Usr Input Collection*/ 
    for(int i = 0; i < n ; i++)
    {
        cin >> iCurUsrInput ; 
        iUsrInputCollection.push_back(iCurUsrInput);   
    }
    iResult = BubbleSort(iUsrInputCollection);
    std::cout << iResult << std::endl ;  
    return 0 ;  
}
