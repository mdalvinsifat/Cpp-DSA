
#include <iostream>
using namespace std ; 
int main() {

    int arr[] = {5,6,7,6,9}; 
    int n = sizeof(arr) / sizeof(int); 
    // int n  = 5;;  

    int max = arr[0]; 
    int min = arr[0]; 

    for (int i = 0 ; i<n ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i]; 
             cout << "val is :" << arr[i] << endl; 
        }

           if(arr[i] < min)
        {
            min = arr[i]; 
             cout << "min val is :" << arr[i] << endl; 
        }
    }
    cout << max << endl;  
    cout << min << endl;  
    return 0;
}