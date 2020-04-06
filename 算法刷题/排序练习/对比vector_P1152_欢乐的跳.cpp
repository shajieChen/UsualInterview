/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  
std::vector<int> GetDiff(std::vector<int> &InputVector)
{
    std::vector<int> vecResult; 
    for(std::size_t i  = 0 ; i < InputVector.size() - 1; i++)
    { 
        vecResult.push_back(std::abs(InputVector[i+1] - InputVector[i]));
    }   
    return vecResult ; 
}

bool SearchDiff(std::vector<int> vecOne, std::vector<int> vecTwo)
{ 
    for( std::vector<int>::iterator item = vecOne.begin();item != vecOne.end(); item++ )
    {
        vector<int>::iterator it =std::find(vecTwo.begin(), vecTwo.end(), *item);
        if(it == vecTwo.end())
        { return false;  }
    }
    return true;  
}  

int main(int argc, char const *argv[])
{   
    int iCurUsrInput = 0;
    std::vector<int> iUsrInputCollection ;  
    std::vector<int> vecResult ; 
    /*Get the Usr Input Collection*/ 
    for(int i = 0; i < 1000 ; i++)
    {
        cin >> iCurUsrInput ; 
        iUsrInputCollection.push_back(iCurUsrInput);  
        
        if (cin.get() == '\n') {
            break; 
        }  
    }
    vecResult = GetDiff(iUsrInputCollection); 
    if(SearchDiff(vecResult , iUsrInputCollection) == false)
        std::cout << "Not jolly" << std::endl;  
    else
        std::cout << "Jolly" << std::endl ; 


    return 0 ;  
}
