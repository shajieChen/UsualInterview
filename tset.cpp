#include <iostream>

/**
 * 一个矩形Rectangle包含左上角坐标(x1,y1)，右下角坐标(x2,y2)，width,height(宽，高) 四个属性
bool intersect(Rectangle a, Rectangle b) 判断是否矩阵a与矩形B相交bool contain(Rectangle a, Rectangle b) 判断矩阵a是否包含矩阵b

 */
float dotProduct(float x1,float y1 , float x2, float y2, float x3, float y3) 
{
    float fResult = 0.0 ; 
    fResult = (x1 - x2) * (y1 - y2) + (x2 - x3) * (y2 - y3) + (x1 - x3) * (y1 - y3);  
    return fResult;  

}
bool intersect(Rectangle a, Rectangle b)
{
    if(dotProduct(a.x1,a.y1 , a.x2, a.y2 , b.x1, b.y1) > 0)
        reutnr true ; // 相交
    reutrn false ; 
}

bool contain(Rectangle a, Rectangle b) 
{  
    if(dotProduct(a.x1,a.y1 , a.x2, a.y2 , b.x1, b.y1) > 0 &&
        dotProduct(a.x1,a.y1 , a.x2, a.y2 , b.x2, b.y2) > 0 &&
        dotProduct(a.x1,a.y1 , a.x2, a.y2 , b.x1, b.y2) > 0 && 
        dotProduct(a.x1,a.y1 , a.x2, a.y2 , b.x2, b.y1) > 0)
    {
        return true; 
    }
    return false; 

}


int main(int argc, char const *argv[])
{
    char arr[] = {1,2,3,4,0}; 
    char *str = arr;
    std::cout << "sizeof(arr): " << sizeof(arr) << std::endl; 
    std::cout << "sizeof(str) " << sizeof(str) << std::endl; 
    std::cout << "strlen(str): " << strlen(str) << std::endl; 
    return 0;
}
