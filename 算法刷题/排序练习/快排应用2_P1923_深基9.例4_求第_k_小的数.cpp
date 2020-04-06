/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;  

int __get_median(std::vector<int>& in_iCollection, int iLeftIndex, int iRightIndex)
{
    int iCenter = (int)((iLeftIndex + iRightIndex) / 2) ;     
   
    if(in_iCollection[iLeftIndex] > in_iCollection[iCenter])
        std::swap(in_iCollection[iLeftIndex],  in_iCollection[iCenter]);
    if(in_iCollection[iLeftIndex] > in_iCollection[iRightIndex])
        std::swap(in_iCollection[iLeftIndex], in_iCollection[iRightIndex]);
    if(in_iCollection[iCenter] > in_iCollection[iRightIndex])
        std::swap(in_iCollection[iCenter] , in_iCollection[iRightIndex]);

    /*Opti*/
    std::swap(in_iCollection[iCenter] , in_iCollection[iRightIndex - 1]);   

    return in_iCollection[iRightIndex - 1 ]; 
}
void PrintVector(std::vector<int> in_vecotr)
{
    std::vector<int>::iterator it = in_vecotr.begin() ; 
    for(;it != in_vecotr.end(); it++)
    {
        std::cout << *it << " " ; 
    }
    std::cout << std::endl; 
}


void __quick_sort(std::vector<int>& in_iCollection, int iLeftIndex, int iRightIndex)
{  
    /*找主元*/
    if(iLeftIndex >= iRightIndex)
        return ; 
    int iPivot = __get_median(in_iCollection , iLeftIndex , iRightIndex);  
    int i = iLeftIndex ;      // 这里是i的位子 , 如果是第一次使用这个方法 这个位置上面就是第一个数字 
    int j = iRightIndex - 1 ; //注意 这里是当前pivot 的位置   
    if(i >= j)
        return ; 

    /*分而治之 -- 递归*/
    while (true)
    { 
        while(in_iCollection[++i] < iPivot){} 
        while(in_iCollection[--j] > iPivot){}
        if(i <= j)
            std::swap(in_iCollection[i] , in_iCollection[j]);
        else 
            break; 
    }   
    std::swap(in_iCollection[i] , in_iCollection[iRightIndex -1 ]); 
    __quick_sort(in_iCollection , iLeftIndex , i - 1) ; 
    __quick_sort(in_iCollection , i+1 , iRightIndex) ; 
} 

void QSort(std::vector<int>& in_iCollection, int in_iMaxNum)  
{
    __quick_sort(in_iCollection , 0 , in_iMaxNum -1 ) ; 
} 
int main(int argc, char const *argv[])
{  
    int n = 0 ;
    int iGetNumIndex = 0 ; 
    int iCurUsrInput = 0;
    std::vector<int> iUsrInputCollection ;  
    cin >> n >> iGetNumIndex;
    /*Get the Usr Input Collection*/ 
    for(int i = 0; i < n ; i++)
    {
        cin >> iCurUsrInput ; 
        iUsrInputCollection.push_back(iCurUsrInput);   
    } 
    
    QSort(iUsrInputCollection , n); 
    printf("%d\n" ,iUsrInputCollection[iGetNumIndex]); 
    return 0 ;  
}
