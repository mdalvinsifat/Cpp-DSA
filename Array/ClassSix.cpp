
#include <iostream>
using namespace std ; 

int liner_search (int *arr, int n, int key)
{
    for(int i = 0 ; i< n ; i++)
    {
        if(arr[i] == key)
        {
            return i; 
        }
    }
    
    return -1;
    
}


int main() {

    int arr[] = {10 , 20 , 67, 78,67};
    int n = sizeof(arr) / sizeof(int); 
cout << liner_search(arr, n , 67); 
    return 0;
}