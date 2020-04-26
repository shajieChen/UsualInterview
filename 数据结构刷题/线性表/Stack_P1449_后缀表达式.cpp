/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <array> 
using namespace std;  


int charToInt(char c)
{
    int iResult = 0 ; 
    iResult = c - '0' ; 
    return iResult; 
}
// Function to concatenate 
// two integers into one 
int concat(int a, int b) 
{ 
  
    // Convert both the integers to string 
    string s1 = to_string(a); 
    string s2 = to_string(b); 
  
    // Concatenate both strings 
    string s = s1 + s2; 
  
    // Convert the concatenated string 
    // to integer 
    int c = stoi(s); 
  
    // return the formed integer 
    return c; 
} 

int vecToInt(std::vector<int> vecInt)
{
    std::vector<int>::iterator it = vecInt.begin(); 
    int iResult = 0 ; 
    for(;it!= vecInt.end(); it++)
    {
        if(it == vecInt.begin())
        {   
            iResult = *it ; 
            continue; 
        }
        iResult = concat(iResult , *it);
    }
    return iResult; 
}

int main(int argc, char const *argv[])
{   
    std::string szInput ; 
    cin >> szInput ;  
    std::stack<int> numStack  ; 
    std::string::iterator it = szInput.begin() ;
    std::vector<int> tmpNumArray  ; 
    int iTmpResult = 0;  
    int iNumA = 0 ; 
    int iNumB = 0 ; 

    for( ;it != szInput.end() ; it++)
    { 
        if(*it == '@')
            break;  
        if(*it  >= '0' && *it <= '9')
        {
            iTmpResult = charToInt(*it);
            tmpNumArray.push_back(iTmpResult); 
        }
        if(*it == '.')
        {
            numStack.push(vecToInt(tmpNumArray)); 
            tmpNumArray.clear() ; 
        }
        if((*it > '9' || *it < '0' ) && *it != '.')
        {
            iNumA = numStack.top(); 
            numStack.pop() ; 
            iNumB = numStack.top() ; 
            numStack.pop() ; 
            if(*it == '+') numStack.push(iNumA + iNumB);
            if(*it == '-') numStack.push(iNumB - iNumA);
            if(*it == '*') numStack.push(iNumA * iNumB);
            if(*it == '/') numStack.push(iNumB / iNumA); 
        }
    }
    iTmpResult = numStack.top(); 
    std::cout << iTmpResult << std::endl; 
    
    return 0 ;  
}
