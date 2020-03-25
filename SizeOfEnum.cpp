
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
 
class B{
    enum EnumTest enumTest1;
};
 
enum EnumChar : unsigned char {
    A = 0x00,
    B,
    C = 0xff
};
 /**
  * size of enum 4
    Class A veriable size 1
    Class B veriable size 1
    sizeof EnumChar1
  */
int main()
{
    cout << "size of enum "<< sizeof(enum EnumTest) << endl;
    cout << "Class A veriable size " << sizeof(A) << endl;//内存大小最少是1字节（所以class A这里是1字节）
    cout << "Class B veriable size " << sizeof(B) << endl;
    cout << "sizeof EnumChar"<< sizeof(EnumChar) << endl;
    return 0;
}