
// #include <iostream>
// using namespace std ; 

// void func (int ar[])
// {
//     ar[0] = 100 ; 
// }
// void func1 (int *ptr)
// {
//     ptr[0] = 1000 ; 
// }
// int main() {

//     int arr[] = {10 , 20 , 67, 78,67}; 

//     func1(arr); 
//     cout << arr[0]; 
//     // func(arr); 
//     // cout << arr[0] << endl; 

//     return 0;
// }



#include <iostream>
using namespace std ; 

void printArr (int nums[] , int n)
{
    for(int i = 0 ; i<=n ; i++)
    {
        cout << nums[i] << endl;
    }
    
}


int main() {

    int arr[] = {10 , 20 , 67, 78,67};
    int n = sizeof(arr) / sizeof(int); 

    printArr(arr, n );
    return 0;
}