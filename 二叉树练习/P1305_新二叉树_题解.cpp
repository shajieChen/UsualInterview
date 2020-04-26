/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;  


struct Tree
{
    char node ; 
    Tree *lTree;  
    Tree *rTree ; 
};

inline Tree* insertNode(char cNode) 
{
    if(cNode == '*')
        return 0;
    Tree* newTree= new Tree() ; 
    newTree->lTree = 0; 
    newTree->rTree = 0 ; 
    newTree->node = cNode;  
    return newTree ;   
}
Tree* GetTree(Tree* tree , char cNode ) 
{
    if(tree->node == cNode)
        return tree;  
    Tree* tResult = nullptr ; 
    if(tree->lTree)
        tResult = GetTree(tree, cNode);
    if(tree->rTree)
        tResult = GetTree(tree, cNode); 
    return tResult; 
}

int main(int argc, char const *argv[])
{  
    int n = 0 ; 
    char tmpRoot , tmpLNode, tmpRNode ;  
    Tree *tree = new Tree() ;  
    cin >> n ; 

    for(int i = 0 ; i < n ; i++)
    {
        cin >> tmpRoot  >> tmpLNode >> tmpRNode;  
        if(i == 0)
        {
            //FirstTime adding ; 
            tree->node = tmpRoot;  
            tree->lTree = insertNode(tmpLNode);
            tree->rTree = insertNode(tmpRNode);
        }
        else 
        {
            Tree *refTree = GetTree(tree, tmpRoot);
            refTree->node = tmpRoot; 
            refTree->lTree = insertNode(tmpLNode);
            refTree->rTree = insertNode(tmpRNode);
        }
    }
    
    return 0 ;  
}
