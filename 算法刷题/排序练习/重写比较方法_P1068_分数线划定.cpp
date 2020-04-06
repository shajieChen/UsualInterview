/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

struct sStudent
{
    unsigned int iID;
    unsigned int iGrade;
};
bool comp(sStudent a , sStudent b) 
{
    if(a.iGrade > b.iGrade)
    {
        return true ; 
    }
    else if(a.iGrade == b.iGrade)
    {
        if(a.iID < b.iID)
            return true;  
        else 
            return false; 
    }
    return false;  
}  
int GetAcceptedIndex(unsigned int iNumAccepted) 
{
    int iResult = (int)iNumAccepted * 1.5;
    return iResult ;  
}
void PrintResult ( std::vector<sStudent> students ,int iIndex)
{
    unsigned int iGrade = students[iIndex].iGrade ; 
    std::vector<sStudent> acceptedStudent ;
    std::vector<sStudent>::iterator it = students.begin(); 
    for(;it != students.end() ; it++)
    {
        if(it->iGrade >= iGrade)
            acceptedStudent.push_back(*it);
    } 
    std::cout << iGrade << ' ' << acceptedStudent.size() << std::endl ;  

    std::vector<sStudent>::iterator it2 = acceptedStudent.begin(); 
    for(;it2!= acceptedStudent.end(); it2++)
    {
        std::cout << it2->iID << ' ' << it2->iGrade << std::endl ; 
    }
}
int main(int argc, char const *argv[])
{  
    unsigned int iNumAttendent = 0 ;
    unsigned int iNumAccepted = 0 ;
 
    std::vector<sStudent> students ; 
    cin >> iNumAttendent >> iNumAccepted ;
    
    /*Get the Usr Input Collection*/ 
    unsigned int tmpID = 0;  
    unsigned int tmpGrade = 0;
    sStudent tmpStud = {} ;   
    for(int i = 0; i < iNumAttendent ; i++)
    {
        cin >> tmpStud.iID >> tmpStud.iGrade ; 
        students.push_back(tmpStud); 
    }
    sort(students.begin() , students.end() , comp);  
    PrintResult(students , GetAcceptedIndex(iNumAccepted));
    return 0 ;  
}
