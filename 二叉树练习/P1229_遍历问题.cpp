/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  

int main(int argc, char const *argv[])
{  
    int iResult; 
    std::string szInput ; 
    std::string szInput2 ; 
    cin >> szInput;  
    cin >> szInput2;  

    int n = szInput.length();  
    char szInputArray[n + 1];  
    strcpy(szInputArray, szInput.c_str()); 

    int n2 = szInput2.length(); 
    char szInputArray2[n2 + 1]; 
    strcpy(szInputArray2, szInput2.c_str());

     for(int i=0;i<strlen(szInputArray);i++)
         for(int j=1;j<strlen(szInputArray2);j++)
          if(szInputArray[i]==szInputArray2[j]&&szInputArray[i+1]==szInputArray2[j-1])
                iResult++;

    
    std::cout << iResult  << std::endl ; 
    return 0 ;  
}
