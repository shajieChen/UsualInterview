
#include <iostream>
using namespace std;
 
class A{
    public:
    enum EnumTest
    {a =1,b = 5};//枚举类型没有占用内存（占用内存的只是变量）
};
 
enum EnumTest{
    a =1,b = 5
};
 
class emptyClass
{

};

class B{
    enum EnumTest enumTest1;
};

enum string{    
x1,    
x2,    
x3=10,    
x4,    
x5,    
} x;
 
enum EnumChar : unsigned char {
    A = 0x00,
    B,
    C = 0xff
}; 
int main()
{
    /**
     *  size of enum 4
        Class A veriable size 1
        Class B veriable size 1
        sizeof EnumChar: 1
     */
    cout << "size of non Inherited enum "<< sizeof(enum EnumTest) << endl;
    cout << "Class A veriable size " << sizeof(A) << endl;//内存大小最少是1字节（所以class A这里是1字节）
    cout << "Class B veriable size " << sizeof(B) << endl;
    cout << "sizeof EnumChar: "<< sizeof(EnumChar) << endl;
    /**
     * size of x 4
     */
    std::cout << "size of Normal enum " << sizeof(x) << std::endl;
    /**
     * size of Empty Class 1
     */
    std::cout << "size of Empty Class " << sizeof(emptyClass)  << std::endl ;   
    return 0;
}