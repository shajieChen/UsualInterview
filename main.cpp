#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <map> 
using namespace std ;  
int main(int, char**) {
    std::unique_ptr<float> test = std::make_unique<float>() ; 
    std::shared_ptr<int> test2 = std::make_shared<int>() ; 
    std::weak_ptr<int> test3 = test2; 
    std::cout << "Unique Ptr: " << sizeof(test) << std::endl ;  
    std::cout << "share Ptr: " <<sizeof(test2) << std::endl ; 
    std::cout << "weak Ptr: " <<sizeof(test3) << std::endl; 

/* ----------------------------- test Container ----------------------------- */
    std::cout << "/* ------------------------------- Vector Size ------------------------------ */" << std::endl; 

    cout<<"sizeof(vector<char>) = "<<sizeof(vector<char>)<<endl;
	cout<<"sizeof(vector<int>) = "<<sizeof(vector<int> {1 , 2 , 3 } )<<endl;
	cout<<"sizeof(vector<short>) = "<<sizeof(vector<short>)<<endl;
	cout<<"sizeof(vector<double>) = "<<sizeof(vector<double>)<<endl;
	cout<<"sizeof(vector<long>) = "<<sizeof(vector<long>)<<endl;
	cout<<"sizeof(vector<float>) = "<<sizeof(vector<float>)<<endl;
	cout<<"sizeof(vector<bool>) = "<<sizeof(vector<bool>)<<endl;
	cout<<"sizeof(vector<string>) = "<<sizeof(vector<string>)<<endl;

    std::cout << "/* ----------------------------- vector iterator ---------------------------- */" << std::endl ;
    cout<<"sizeof(vector<char>) = "<<sizeof(vector<char>::iterator)<<endl;
	cout<<"sizeof(vector<int>) = "<<sizeof(vector<int>::iterator)<<endl;
	cout<<"sizeof(vector<short>) = "<<sizeof(vector<short>::iterator)<<endl;
	cout<<"sizeof(vector<double>) = "<<sizeof(vector<double>::iterator)<<endl;
	cout<<"sizeof(vector<long>) = "<<sizeof(vector<long>::iterator)<<endl;
	cout<<"sizeof(vector<float>) = "<<sizeof(vector<float>::iterator)<<endl;
	cout<<"sizeof(vector<bool>) = "<<sizeof(vector<bool>::iterator)<<endl;
	cout<<"sizeof(vector<string>) = "<<sizeof(vector<string>::iterator)<<endl;

   std::cout << "/* ----------------------------- vector *T iterator ---------------------------- */" << std::endl ;
    cout<<"sizeof(vector<char*>) = "<<sizeof(vector<char*>::iterator)<<endl;
	cout<<"sizeof(vector<int*>) = "<<sizeof(vector<int*>::iterator)<<endl;
	cout<<"sizeof(vector<short*>) = "<<sizeof(vector<short*>::iterator)<<endl;
	cout<<"sizeof(vector<double*>) = "<<sizeof(vector<double*>::iterator)<<endl;
	cout<<"sizeof(vector<long*>) = "<<sizeof(vector<long*>::iterator)<<endl;
	cout<<"sizeof(vector<float*>) = "<<sizeof(vector<float*>::iterator)<<endl;
	cout<<"sizeof(vector<bool*>) = "<<sizeof(vector<bool*>::iterator)<<endl;
	cout<<"sizeof(vector<string*>) = "<<sizeof(vector<string*>::iterator)<<endl;

    std::cout << "/* ------------------------------- list Size ------------------------------ */" << std::endl; 
    cout<<"sizeof(list<char>) = "<<sizeof(list<char>)<<endl;
	cout<<"sizeof(list<int>) = "<<sizeof(list<int>)<<endl;
	cout<<"sizeof(list<short>) = "<<sizeof(list<short>)<<endl;
	cout<<"sizeof(list<double>) = "<<sizeof(list<double>)<<endl;
	cout<<"sizeof(list<long>) = "<<sizeof(list<long>)<<endl;
	cout<<"sizeof(list<float>) = "<<sizeof(list<float>)<<endl;
	cout<<"sizeof(list<bool>) = "<<sizeof(list<bool>)<<endl;
	cout<<"sizeof(list<string>) = "<<sizeof(vector<string>)<<endl; 

    std::cout << "/* ------------------------------- map Size ------------------------------ */" << std::endl; 
    cout<<"sizeof(map<char,char>) = "<<sizeof(map<char,char>)<<endl;
    cout<<"sizeof(map<int,int>) = "<<sizeof(map<int,int>)<<endl;
    cout<<"sizeof(map<short,short>) = "<<sizeof(map<short,short>)<<endl;
    cout<<"sizeof(map<double,double>) = "<<sizeof(map<double,double>)<<endl;
    cout<<"sizeof(map<long,long>) = "<<sizeof(map<long,long>)<<endl;
    cout<<"sizeof(map<float,float>) = "<<sizeof(map<float,float>)<<endl;
    cout<<"sizeof(map<bool,bool>) = "<<sizeof(map<bool,bool>)<<endl;
    cout<<"sizeof(map<string,string>) = "<<sizeof(map<string,string>)<<endl;
}
