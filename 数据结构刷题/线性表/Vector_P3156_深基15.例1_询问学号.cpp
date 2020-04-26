/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

int main(int argc, char const *argv[])
{  
    unsigned int iNumStudents = 0 ;
    unsigned int iNumAsked = 0 ;  
    unsigned int iStudentID = 0;
    unsigned int iCurAsk =0 ; 
    std::vector<int> vecStudentID ;
    std::vector<int> vecAsked ;   
    cin >> iNumStudents >> iNumAsked ;
    /*Get the Usr Input Collection*/ 
    for(int i = 0; i < iNumStudents ; i++)
    {
        cin >> iStudentID ; 
        vecStudentID.push_back(iStudentID);   
    }
    for(int i = 0; i < iNumAsked ; i++)
    {
        cin >> iCurAsk ; 
        vecAsked.push_back(iCurAsk);
    } 
    std::vector<int>::iterator it = vecAsked.begin() ; 
    for(; it != vecAsked.end(); it++)
    {
        std::cout << vecStudentID[(*it) - 1 ] << std::endl ; 
    }

    
    return 0 ;  
}
