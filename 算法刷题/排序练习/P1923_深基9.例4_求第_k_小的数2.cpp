/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*解析http://c.biancheng.net/view/566.html
*/
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;   
int main(int argc, char const *argv[])
{  
    int n = 0 ;
    int iGetNumIndex = 0 ; 
    int iCurUsrInput = 0;
    std::vector<int> iUsrInputCollection ;  
    cin >> n >> iGetNumIndex;
    for(int i = 0; i < n ; i++)
    {
        cin >> iCurUsrInput ; 
        iUsrInputCollection.push_back(iCurUsrInput);   
    } 
      nth_element(iUsrInputCollection.begin(),
                    iUsrInputCollection.begin()+iGetNumIndex,
                    iUsrInputCollection.end());//使第k小整数就位 
   
    printf("%d\n" , iUsrInputCollection[iGetNumIndex]); 
    return 0 ;  
}
