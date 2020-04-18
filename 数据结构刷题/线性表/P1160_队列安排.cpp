/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;  
  
void printList(std::list<int> listPrinted)
{
    std::list<int>::iterator it = listPrinted.begin() ; 
    for(;it!=listPrinted.end(); it++)
    {
        std::cout << *it  << ' '; 
    }
    std::cout << std::endl ; 
}

int GetIndexOfValue(std::list<int> &listView, int iValue)
{
    std::list<int>::iterator it = listView.begin() ; 
    int iResult = 0 ; 
    for(;it != listView.end(); it++)
    {
        if(*it == iValue)
        {
            iResult = std::distance(listView.begin(), it);
            break ;
        }
        // std::cout << "getind" << std::endl  ; 
    }
    return iResult;
}

void InsertElement(std::list<int> &listView, int index ,int element)
{
    std::list<int>::iterator it = listView.begin() ; 
    for(int i =0 ; i <= index ; i++ )
    {
        it++;  
        // std::cout << "?? " << std::endl ;
    }
    listView.insert(it, element);
}

std::list<int> buildList(int numElement)
{
    std::list<int> returnList; 
    int iElement = 0 ; 
    int iOperate = 0 ; 
    for(int i = 0 ; i < numElement ; i++)
    {
        if(i == 0) {
            returnList.push_front(1); 
            std::cout << std::endl; 
            std::cout << "-----" << std::endl; 
            printList(returnList) ;
            continue;  
        }
        cin >> iElement >> iOperate ; 

        if(iOperate == 0 )
        {
            InsertElement(returnList , GetIndexOfValue(returnList , iElement) - 1, i+1);
        }
        else if (iOperate == 1 )
        { 
            InsertElement(returnList , GetIndexOfValue(returnList , iElement) + 1 , i + 1) ;
        } 

        printList(returnList) ;
    }
    // std::cout << "return " << std::endl ; 
    return returnList;  
}


int main(int argc, char const *argv[])
{   
    int iNumElement = 0 ; 
    std::list<int> listResult ; 
    cin >> iNumElement;  
    listResult = buildList(iNumElement) ;  

    return 0 ;      
}
