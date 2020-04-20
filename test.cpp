#include <iostream>
#include <memory> 
#include <functional> 
using namespace std::placeholders;  
// using namespace std ; 
struct TestBound
{   
    double a, b ; 
    double multiplay() 
    {
        return a * b ;
    }
};



struct test 
{
    float testVar ;
    float testVar2 ; 
};

double GetDouble(int x, int y )
{
    return x / y ; 
}
int main(int argc, char const *argv[])
{    
    auto test = std::bind<float>(GetDouble , 10 , 2 );
    TestBound testBound = {2, 10 } ;
    auto test2 = std::bind(&TestBound::multiplay, testBound);
    std::cout << test() << std::endl;  
    
    std::cout << test2()  << std::endl; 
    return 0;
}

