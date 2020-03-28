#include<vector>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls)
{
    std::vector<unsigned long long> out_result ;  
     unsigned long long sumResult = 0 ; 
     /*Get Sum Result */
    std::vector<unsigned long long>::const_iterator it = ls.begin() ; 
    for(it = ls.begin(); it != ls.end() ; it++)
    {
        sumResult += (*it) ; 
    }
    out_result.push_back(sumResult);
 
    for(int i = 0 ; i < ls.size() ; i ++)
    {  
        sumResult -= ls[i];    
        
        out_result.push_back(sumResult);
    } 
    return out_result; 
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
