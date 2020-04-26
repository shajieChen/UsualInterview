/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include<string>
#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;   

void Analyse(string pOrder, string inOrder) 
{
    if(pOrder.empty()== true)
        return;  
    char cRoot = pOrder[0] ; 
    int cRIndex = inOrder.find(cRoot);
    pOrder.erase(pOrder.begin());
    //获取中序遍历 左子树 
    string szLeftIn = inOrder.substr(0, cRIndex);
    //获取中序遍历 右子树
    string szRightIn = inOrder.substr(cRIndex + 1);
    //获取前序遍历 左子树
    string szLeftPre = pOrder.substr(0 ,cRIndex);
    //获取前序遍历 右子树
    string szRightPre = pOrder.substr(cRIndex);

    Analyse(szLeftPre, szLeftIn); 
    Analyse(szRightPre, szRightIn);

    std::cout << cRoot; 

}


int main(int argc, char const *argv[])
{   
    string pOrder , inOrder ; 

    cin >> inOrder >> pOrder ; 
    Analyse(pOrder, inOrder);
    std::cout << std::endl; 
    return 0 ;  
}
