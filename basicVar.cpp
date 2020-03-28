#include <iostream>
#include <limits>
using namespace std ; 
int main(int argc, char const *argv[])
{
    std::unique_ptr<float> test = std::make_unique<float>() ; 
    std::shared_ptr<int> test2 = std::make_shared<int>() ; 
    std::weak_ptr<int> test3 = test2; 
    /**
     * Unique Ptr: 8
       share Ptr: 16
       weak Ptr: 16
    */
    std::cout << "Unique Ptr: " << sizeof(test) << std::endl ;  
    std::cout << "share Ptr: " <<sizeof(test2) << std::endl ; 
    std::cout << "weak Ptr: " <<sizeof(test3) << std::endl;
    /**
     * Empty InnerClass: 1
     */
    class innerClass 
    { 
    };
    std::cout << "Empty InnerClass: " << sizeof(innerClass) << std::endl;  
    /**
     * Empty Enum: 8
     */
    enum test 
    { 
        fist = 0,  
        last  
    }; 
    std::cout << "Empty Enum: " << sizeof(test) << std::endl;  
	std::cout << "/* ------------------------------- 基本数据类型 ------------------------------ */" << std::endl; 
    /** 
     *  sizeof(char) = 1
        sizeof(int) = 4
        sizeof(unsigned int) = 4
        sizeof(long) = 8
        sizeof(unsigned long) = 8
        sizeof(float) = 4
        sizeof(double) = 8
    */
    cout<<"sizeof(char) = "<<sizeof(char)<<endl;
	cout<<"sizeof(int) = "<<sizeof(int)<<endl;
	cout<<"sizeof(unsigned int) = "<<sizeof(unsigned int)<<endl;
	cout<<"sizeof(long) = "<<sizeof(unsigned long)<<endl;
	cout<<"sizeof(unsigned long) = "<<sizeof(unsigned long)<<endl;
	cout<<"sizeof(float) = "<<sizeof(float)<<endl;
	cout<<"sizeof(double) = "<<sizeof(double)<<endl; 

    unsigned int i ; 
    i = - 1; 
    /**
     * Unsigned int - 1:FFFFFFFF
     */ 
    printf("Unsigned Max int - 1:%X" , i) ;
    std::cout << std::endl;  

    return 0 ;
}
