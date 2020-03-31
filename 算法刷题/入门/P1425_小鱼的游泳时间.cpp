/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std; 
int main(int argc, char const *argv[])
{ 
    int beginT , beginS, endT, endS = 0 ; 
    cin >> beginT >> beginS >> endT >> endS;

    int resultBegin, resultEnd, deltaS , resultT , resultS  = 0 ;
    resultBegin = beginT * 60 + beginS ; 
    resultEnd = endT * 60 + endS ; 
    deltaS = resultEnd - resultBegin;  
    resultT =  (int) deltaS / 60 ;
    resultS = (int) deltaS % 60 ; 
    cout << resultT << " " << resultS << endl;   
    return 0 ;  
}
