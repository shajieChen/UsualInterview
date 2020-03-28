#include <iostream> 
 #include <map> 
 #include <__hash_table>
using namespace std ; 
int main(int argc, char const *argv[])
{	 

	// cout << "RB_tree" << sizeof(_RB_tree.)
    /***
     *  sizeof(map<char,char>) = 24
        sizeof(map<int,int>) = 24
        sizeof(map<short,short>) = 24
        sizeof(map<double,double>) = 24
        sizeof(map<long,long>) = 24
        sizeof(map<float,float>) = 24
        sizeof(map<bool,bool>) = 24
        sizeof(map<string,string>) = 24
     */
    std::cout << "/* ------------------------------- map Size ------------------------------ */" << std::endl; 
    cout<<"sizeof(map<char,char>) = "<<sizeof(map<char,__identity<char>>)<<endl;
    cout<<"sizeof(map<int,int>) = "<<sizeof(map<int,less<int>>)<<endl;
    cout<<"sizeof(map<short,short>) = "<<sizeof(map<short,short>)<<endl;
    cout<<"sizeof(map<double,double>) = "<<sizeof(map<double,double>)<<endl;
    cout<<"sizeof(map<long,long>) = "<<sizeof(map<long,long>)<<endl;
    cout<<"sizeof(map<float,float>) = "<<sizeof(map<float,float>)<<endl;
    cout<<"sizeof(map<bool,bool>) = "<<sizeof(map<bool,bool>)<<endl;
    cout<<"sizeof(map<string,string>) = "<<sizeof(map<string,string>)<<endl;
    std::cout << "/* ------------------------------- hashTable Size ------------------------------ */" << std::endl;
    // cout<<"sizeof(map<char,char>) = "<<sizeof(std::hash<char,__identity<char>>)<<endl;
    cout<<"sizeof(map<int,int>) = "<<sizeof(map<int,less<int>>)<<endl;
    cout<<"sizeof(map<short,short>) = "<<sizeof(map<short,short>)<<endl;
    cout<<"sizeof(map<double,double>) = "<<sizeof(map<double,double>)<<endl;
    cout<<"sizeof(map<long,long>) = "<<sizeof(map<long,long>)<<endl;
    cout<<"sizeof(map<float,float>) = "<<sizeof(map<float,float>)<<endl;
    cout<<"sizeof(map<bool,bool>) = "<<sizeof(map<bool,bool>)<<endl;
    cout<<"sizeof(map<string,string>) = "<<sizeof(map<string,string>)<<endl;
}