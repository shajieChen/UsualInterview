/*P1001 A+B Problem
*https://www.luogu.com.cn/problem/P5703
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map> 
#include <iterator>
#include <set> 
using namespace std;  

void PrintVector(std::vector<int> in_vecotr)
{
    std::vector<int>::iterator it = in_vecotr.begin() ; 
    for(;it != in_vecotr.end(); it++)
    {
        std::cout << *it << " " ; 
    }
    std::cout << std::endl; 
}


int BubbleSort(std::vector<int> &InputVector)
{
    int iCount = 0 ;  
    for(std::size_t j  = 0 ; j < InputVector.size() - 1; j++)
    for(std::size_t i  = 0 ; i < InputVector.size() - 1; i++)
    {
        if(InputVector[i] > InputVector[i+1])
        {
            std::swap(InputVector[i] , InputVector[i+1]);
            iCount = iCount + 1 ; 
        }    
    }
    return iCount;  
}

void SelectionSort(std::vector<int> &InputVector)
{
    int minIndex = 0 ; 
    for(std::size_t i = 0 ; i < InputVector.size() -1 ; i++ )
    {
        minIndex = i ; 
        for(std::size_t j = i + 1 ; j < InputVector.size() ; j++ ) 
        {
            if(InputVector[j] < InputVector[minIndex])
            {
                std::swap(InputVector[minIndex] , InputVector[j]);
            }
        }
    }
} 

void InsertionSort(std::vector<int> &InputVector)
{   
    int storeValue , j; 
    for(std::size_t i = 1; i < InputVector.size() ; i++ )
    {
        storeValue = InputVector[i];
        j = i - 1 ; 
        for(;j >= 0 && InputVector[j] > storeValue ; j = j - 1)
        {
            InputVector[j + 1 ] = InputVector[j]; 
        }
        InputVector[j + 1] = storeValue  ; 
    } 
}

void ShellSort(std::vector<int> &InputVector)
{
    for(int gap = InputVector.size() / 2 ; gap > 0 ; gap /= 2)
    {   
        for(int i = gap ; i < InputVector.size() ; i ++)
        {
            int tmp = InputVector[i] ; 
            int j = 0 ; 
            for(j = i ; j >= gap && InputVector[j - gap]> tmp ; j-= gap )
            {
                InputVector[j] = InputVector[j - gap] ; 
            }
            InputVector[j] = tmp;  
        }
    }
}
void heapify(std::vector<int> &InputVector, int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && InputVector[l] > InputVector[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && InputVector[r] > InputVector[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(InputVector[i], InputVector[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(InputVector, n, largest); 
    } 
} 

void HeapSort(std::vector<int> &InputVector)
{
     // Build heap (rearrange array) 
    for (int i = InputVector.size() / 2 - 1; i >= 0; i--) 
        heapify(InputVector, InputVector.size(), i); 
  
    // One by one extract an element from heap 
    for (int i=InputVector.size()-1; i>0; i--) 
    { 
        // Move current root to end 
        swap(InputVector[0], InputVector[i]); 
  
        // call max heapify on the reduced heap 
        heapify(InputVector, i, 0); 
    } 
}

// Merges two subarrays of InputVector[]. 
// First subarray is InputVector[l..m] 
// Second subarray is InputVector[m+1..r] 
void merge(std::vector<int> &InputVector, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = InputVector[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = InputVector[m + 1+ j]; 
  
    /* Merge the temp arrays back into InputVector[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            InputVector[k] = L[i]; 
            i++; 
        } 
        else
        { 
            InputVector[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        InputVector[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        InputVector[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(std::vector<int> &InputVector, int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(InputVector, l, m); 
        mergeSort(InputVector, m+1, r); 
  
        merge(InputVector, l, m, r); 
    } 
} 

int main(int argc, char const *argv[])
{   
    int num[] = {1 ,2 ,3, 4,5};
    list<int> myList(num , num + sizeof(num )/ sizeof(int));

    std::list<int>::iterator it = myList.begin();

    for(;it != myList.end(); it++)
        cout << *it << " "  ; 
    std::cout << std::endl ; 

    it = myList.begin(); 
    for(int i =6 ; i < 10 ; i ++)
        myList.insert(it , i);
 std::cout << std::endl ; 

    for(it = myList.begin() ; it != myList.end() ; it++)
        cout << *it << " " ;
 
    

    return 0 ;  
}
