/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

bool testPop(std::stack<int> &iStack , int popValue)
{
    if(iStack.top() ==popValue)
    {
        iStack.pop() ; 
        return true ; 
    }
    return false;    
}


void BuildAndTest(std::vector<bool> &vecResult)
{
    int iLength = 0 ;
    int tmpNum = 0; 
    bool tmpBool = true;  
    std::stack<int> iStack ; 
    cin >> iLength ;  
    //push 
    for(int i = 0; i < iLength ; i++)
    {   
        cin >> tmpNum ; 
        iStack.push(tmpNum);
    }
    //pop
    for(int i =0 ; i < iLength ; i++)
    {
        cin >> tmpNum; 
        if(testPop(iStack , tmpNum) == false)
        {
            tmpBool = false;  
        }
    }
    vecResult.push_back(tmpBool); 
}

int main(int argc, char const *argv[])
{  
    int n  = 0 ; 
    std::vector<bool> vecResult ; 
    cin >> n ; 
    for(int i =0 ; i < n ; i ++ )
    {
        BuildAndTest(vecResult) ; 
    }
    std::vector<bool>::iterator it = vecResult.begin() ; 
    for(;it != vecResult.end() ; it++)
    {
        if(*it == false)
            std::cout << "No" << std::endl; 
        else if(*it == true)
            std::cout << "Yes" << std::endl;  
    }

    return 0 ;  
}
