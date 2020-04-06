/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  
 
struct Persident
{
    unsigned int iID ; 
    unsigned long long iVote ;  
};

bool CompPer(Persident a, Persident b ) 
{
    if(a.iVote > b.iVote)
        return false;  //false 作为要交换
    return true;    //true 不交换
}

int main(int argc, char const *argv[])
{  
    unsigned int n = 0 ;
    unsigned long long iCurUsrInput = 0;
    Persident tmpPer = {} ; 
    std::vector<Persident> iUsrInputCollection ;   
    cin >> n ;
    /*Get the Usr Input Collection*/ 
    for(int i = 0; i < n ; i++)
    {
        cin >> iCurUsrInput ; 
        tmpPer.iID = (i+1); 
        tmpPer.iVote = iCurUsrInput ; 
        iUsrInputCollection.push_back(tmpPer);   
    } 
    sort(iUsrInputCollection.begin() , iUsrInputCollection.end() , CompPer); 
    std::cout << iUsrInputCollection[n - 1].iID << std::endl; 
    std::cout << iUsrInputCollection[n - 1].iVote << std::endl;  
    return 0 ;  
}
