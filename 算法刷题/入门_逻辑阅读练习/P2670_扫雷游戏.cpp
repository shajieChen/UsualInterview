/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
using namespace std;  
enum Unit
{
    STAR = 0 , 
    QUESTION ,  
    UNKNOWN 

};
bool outOfBound(int maxY, int maxX , int yIndex, int xIndex)
{  
    int maxIndexY = maxY - 1;  
    int maxIndexX = maxX - 1;  
    if(yIndex > maxIndexY || yIndex < 0 )
        return true;  
    if(xIndex > maxIndexX || xIndex < 0 )
        return true;   
    return false; 
}
Unit GetIndexType(const vector< std::vector<Unit> > Board,
                    int indexY, int indexX)
{
    Unit result = UNKNOWN; 
    result = Board[indexY][indexX];  
    return result;   
}
int GetAroundSTAR(const vector< std::vector<Unit> > Board,  
                    int maxY , int maxX, int indexY, int indexX) 
{ 
    int iResult = 0 ; 
    for(int i = - 1 ; i < 2  ; i ++ )
    {
        for(int j = - 1;  j < 2 ; j ++)
        {
            if(outOfBound(maxY, maxX, indexY + i , indexX + j ) == false) 
            {
                if(GetIndexType(Board,  indexY+ i , indexX + j) == STAR)
                { 
                    iResult++;  
                } 
            }
        }
    }  
    return iResult ; 
}
int main(int argc, char const *argv[])
{ 
    int n ,m  = 0 ; 
    char unit = '\0' ; 
    Unit cell = UNKNOWN; 
    cin >> n >> m ; 
    std::vector< std::vector<Unit> > vBoard(n) ;  
    /*Create Board*/  
    for(int y = 0 ; y < n ;  y++)
    {
        vBoard[y] = std::vector<Unit>(m);
        for(int x = 0 ; x < m ; x++)
        {
            cin >> unit;
            if(unit == '*')
                cell = STAR  ; 
            else if(unit == '?')
                cell = QUESTION ; 
            vBoard[y][x] = cell;   
        }
    }
    for(int y = 0;  y < n ; y++)
    {
        for(int x = 0 ; x < m ; x++)
        { 
            if(GetIndexType(vBoard , y , x) == STAR)
                cout << "*" ; 
            else 
                std::cout << GetAroundSTAR(vBoard, n, m ,y ,x ); 
        }
        std::cout << std::endl; 
    }  
    return 0 ;  
}
