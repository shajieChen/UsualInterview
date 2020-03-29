#include <iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    int int1 =26; 
    int int2 =45; 
    int *intP1 = &int1; 
    int *intP2 = &int2; 
    *intP1 = 89;
    *intP2 = 62 ;
    intP1 = intP2; 
    *intP1 = 80;
    int1 = 57;
    cout << int1 << "," << int2 << endl; 
    cout << *intP1 << "," << *intP2 << endl; 
    return 0;
}
