/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

void GetPreOrder(string szInOrder, string szAfOrder) 
{
    if(szInOrder.length() > 0 )
    {
        char rootNode = szAfOrder[szAfOrder.length() -1];
        std::cout << rootNode ; 
        int iIndex = szInOrder.find(rootNode);
        GetPreOrder(szInOrder.substr(0, iIndex), szAfOrder.substr(0, iIndex));
        GetPreOrder(szInOrder.substr(iIndex + 1 ) , szAfOrder.substr(iIndex, szInOrder.length() - iIndex -1));
    }
}


int main(int argc, char const *argv[])
{  
    std::string szInOrder, szAfOrder ; 
    cin >> szInOrder >> szAfOrder ; 
    GetPreOrder(szInOrder, szAfOrder);
    std::cout << std::endl; 
    return 0 ;  
}
