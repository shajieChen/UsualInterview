#include <iostream>
#include <memory> 
 //http://www.voidcn.com/article/p-shaukjgk-he.html
using namespace std ; 
struct test 
{
    float testVar ;
    float testVar2 ; 
};
int main(int argc, char const *argv[])
{    
    std::unique_ptr<test> relatest = std::make_unique<test>() ; 
    std::cout << "test " << std::endl ; 
    return 0;
}

