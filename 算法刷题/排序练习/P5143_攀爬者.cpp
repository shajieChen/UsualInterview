/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector> 
#include <stdio.h>
#include <cmath> 
#include <algorithm>
using namespace std;  

struct sMountain
{
    int x, y, z;
};

bool comp(sMountain a, sMountain b )
{
    return a.z < b.z ;
}

int main(int argc, char const *argv[])
{  
    unsigned int n = 0 ; 
    std::vector<sMountain> moutains ;  
    cin >> n ;
    /*Get the Usr Input Collection*/  
    sMountain tmpMountain = {} ; 
    for(size_t i = 0; i < n ; i++)
    { 
        std::cin >> tmpMountain.x >> tmpMountain.y >> tmpMountain.z ; 
        moutains.push_back(tmpMountain);
    }
    sort(moutains.begin() , moutains.end(), comp); 

    float fReuslt = 0.0 ;  
     for(int i=1,j=0;i<n;++j,++i)
        fReuslt+=sqrt(std::pow(moutains[i].x-moutains[j].x,2)+pow(moutains[i].y-moutains[j].y,2)+pow(moutains[i].z-moutains[j].z,2)); //计算
    printf("%0.3lf",fReuslt); 
    
    return 0 ;  
}
