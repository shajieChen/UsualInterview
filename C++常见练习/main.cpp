#include <iostream>     // std::cout
#include <functional> //without .h 

double GetDivide (int x, int y)
{
    return x / y ; 
}

int main(int, char**) {
    auto test = std::bind(GetDivide, 1 ,2);
    std::cout << test() << std::endl; 
}
