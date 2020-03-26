#include <iostream>

void example(char acWelcome[]){
    printf("%d",sizeof(acWelcome));
    std::cout << std::endl ;
    return;
} 
int main(int argc, char const *argv[])
{
    char acWelcome[]="Welcome to Huawei Test";
    example(acWelcome);
    return 0;
}
