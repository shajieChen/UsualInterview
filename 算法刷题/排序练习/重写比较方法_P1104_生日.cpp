/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  
struct sStudent
{
    string szName ; 
    unsigned int iAgeYear ; 
    unsigned int iAgeMonth ;
    unsigned int iAgeDate; 
};

bool comp(sStudent a , sStudent b)
{  
    if(a.iAgeYear != b.iAgeYear)
    return a.iAgeYear < b.iAgeYear;//如果出生年份不相等便直接按照年份进行排序
    else{
    if(a.iAgeMonth != b.iAgeMonth) return a.iAgeMonth < b.iAgeMonth;//年份相等月份不相等
    else if(a.iAgeDate == b.iAgeDate && a.iAgeDate == b.iAgeDate) return false;//同年同月同日生 便把后输入的排在前面
    else if(a.iAgeDate != b.iAgeDate && a.iAgeMonth == b.iAgeMonth) return a.iAgeDate < b.iAgeDate;//同年同月不同日
    }
    return true; 
}

void PrintVector(std::vector<sStudent> students)
{
    std::vector<sStudent>::iterator it = students.begin() ; 
    for(;it != students.end(); it++)
    {
        std::cout << it->szName << std::endl;
    } 
}


int main(int argc, char const *argv[])
{  
    unsigned int n = 0 ;
    unsigned int iCurUsrInput = 0; 
    cin >> n ;
    std::vector<sStudent> students ; 
    /*Get the Usr Input Collection*/
    string szName; 
    unsigned int tmpYear; 
    unsigned int tmpMonth ; 
    unsigned int tmpDate;
    sStudent tmpStudent ;   
    for(int i = 0; i < n ; i++)
    {     
        cin >> szName >> tmpYear >> tmpMonth >> tmpDate; 
        tmpStudent.szName = szName ;
        tmpStudent.iAgeYear = tmpYear ; 
        tmpStudent.iAgeMonth = tmpMonth ; 
        tmpStudent.iAgeDate = tmpDate;  
        students.push_back(tmpStudent); 
    }
    sort(students.begin() , students.end() , comp);
    PrintVector(students);
    return 0 ;  
}
