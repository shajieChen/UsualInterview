/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
using namespace std; 
struct Pair
{
    int playerOneValue;
    int playerTwoValue;  
};

int main(int argc, char const *argv[])
{
    char cInputChar  = '\0' ;  
    std::vector<bool> turnResult = {} ; 
    while(cin >> cInputChar && cInputChar != 'E')
    {
        if(cInputChar == 'W') 
            turnResult.push_back(true) ;  
        if(cInputChar == 'L')
            turnResult.push_back(false); 
    } 
    std::vector<bool>::iterator eleMarkPtr = turnResult.begin();
    Pair tmpPairValue = { 0, 0};  
    for(;eleMarkPtr != turnResult.end(); eleMarkPtr++ ) 
    {
        if(*eleMarkPtr == true)
            tmpPairValue.playerOneValue ++;    
        if(*eleMarkPtr == false)
            tmpPairValue.playerTwoValue ++ ; 
        if(tmpPairValue.playerOneValue == 11 || tmpPairValue.playerTwoValue == 11)
        {
            std::cout << tmpPairValue.playerOneValue << ":" << tmpPairValue.playerTwoValue << std::endl;  
             tmpPairValue = { 0, 0};  
        }  
    } 
    /*Result value*/
    if(tmpPairValue.playerOneValue != 0 || tmpPairValue.playerTwoValue != 0 )
    {
           std::cout << tmpPairValue.playerOneValue << ":" << tmpPairValue.playerTwoValue << std::endl;   
    }
    std::cout << std::endl;  
    eleMarkPtr = turnResult.begin() ; 
    tmpPairValue = {0 ,0}; 
    for(; eleMarkPtr != turnResult.end() ; eleMarkPtr++)
    { 
        if(*eleMarkPtr == true)
            tmpPairValue.playerOneValue ++;    
        if(*eleMarkPtr == false)
            tmpPairValue.playerTwoValue ++ ;  
        if(tmpPairValue.playerOneValue == 21 || tmpPairValue.playerTwoValue == 21 )
        {
            std::cout << tmpPairValue.playerOneValue << ":" << tmpPairValue.playerTwoValue << std::endl;  
             tmpPairValue = { 0, 0};  
        }  
    }
        if(tmpPairValue.playerOneValue != 0 || tmpPairValue.playerTwoValue != 0 )
    {
           std::cout << tmpPairValue.playerOneValue << ":" << tmpPairValue.playerTwoValue << std::endl;   
    }
    return 0 ;  
}
