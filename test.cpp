#include <iostream>
 //http://www.voidcn.com/article/p-shaukjgk-he.html
using namespace std ; 
 struct 

       {

              short a1;

              short a2;

       }A;

       struct 

       {

              long b1;

              short b2;

       }B;

       char data[100];

       int test[100];

       char* pstr="abcdefghij";

       char* str="a\n";
int main(int argc, char const *argv[])
{ 
     cout<<sizeof(A)<<endl;             // 4

       cout<<sizeof(B)<<endl;             // 8

       cout<<sizeof(data)<<endl;  // 100

       cout<<sizeof(test)<<endl;          // 400

       cout<<sizeof(pstr)<<endl;   // 4

       cout<<sizeof(str)<<endl;            // 4
    
       char str[1] ; 
       cin >> str ;
       std::cout << str << std::endl;  
       char *test2 = str + 1 ; 
       std::cout << test2 << std::endl;  
       
       // cout <<  << std::endl ;  
    return 0;
}
