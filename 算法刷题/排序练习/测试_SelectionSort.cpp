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

void SelectionSort(std::vector<int> &InputVector)
{
    int minIndex = 0 ; 
    for(std::size_t i = 0 ; i < InputVector.size() -1 ; i++ )
    {
        minIndex = i ; 
        for(std::size_t j = i + 1 ; j < InputVector.size() ; j++ ) 
        {
            if(InputVector[j] < InputVector[minIndex])
            {
                std::swap(InputVector[minIndex] , InputVector[j]);
            }
        }
    }
} 

void InsertionSort(std::vector<int> &InputVector)
{   
    int storeValue , j; 
    for(std::size_t i = 1; i < InputVector.size() ; i++ )
    {
        storeValue = InputVector[i];
        j = i - 1 ; 
        for(;j >= 0 && InputVector[j] > storeValue ; j = j - 1)
        {
            InputVector[j + 1 ] = InputVector[j]; 
        }
        InputVector[j + 1] = storeValue  ; 
    } 
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
    // iResult = BubbleSort(iUsrInputCollection); 
    InsertionSort(iUsrInputCollection); 
    PrintVector(iUsrInputCollection);
    return 0 ;  
}
