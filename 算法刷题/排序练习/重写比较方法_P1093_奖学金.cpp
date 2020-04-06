/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;  
struct Student
{
    int iChinese ; 
    int iMath  ;
    int iEnglish  ; 
    int iID ; 
    int iTotal ; 

    std::string toString() {
        std::ostringstream strout;
        // strout<< "iID:: " << iID << "\n Chiniese: " << iChinese << "\n iMath: " << iMath << "\n iEnglish: " << iEnglish << "\n iTotal: " << iTotal;
       strout << iID << ' ' << iTotal; 
        return strout.str();
    }
};
int GetTotal(int in_Chinese , int in_Math ,int in_English)  
{
    return (in_Chinese + in_Math + in_English) ; 
}
bool StudentComp(Student a, Student b)
{
    if(a.iTotal > b.iTotal)
        return true; 
    else if(a.iTotal == b.iTotal)
    {
        if(a.iChinese > b.iChinese)
            return true; 
        else if (a.iChinese == b.iChinese)
        {
            return a.iID > b.iID ; 
        }
    }
    return false ; 
}


int main(int argc, char const *argv[])
{   
    /*Student Info */
    int tmpID = 0 ; 
    int tmpChinese = 0 ; 
    int tmpMath = 0 ; 
    int tmpEnglish = 0; 
    int tmpTotal = 0; 

    int totalNum = 0 ; 
    cin >> totalNum ;  
    std::vector<Student> vecStudents ; 
    Student tmpStudent = {0 , 0 , 0, 0, 0} ; 
    for(int i = 0 ; i < totalNum ; i++)
    {
        tmpStudent.iID = i + 1;
        cin >> tmpChinese >> tmpMath >> tmpEnglish;  
        tmpStudent.iChinese = tmpChinese ; 
        tmpStudent.iMath = tmpMath ; 
        tmpStudent.iEnglish = tmpEnglish;  
        tmpStudent.iTotal = GetTotal(tmpChinese, tmpMath, tmpEnglish); 
        vecStudents.push_back(tmpStudent) ; 
    } 

    sort(vecStudents.begin() , vecStudents.end(), StudentComp);
    for(int i = 0 ; i < 5; i++)
    {
        std::cout << vecStudents[i].toString() << std::endl; 
    }
    return 0 ;  
}
