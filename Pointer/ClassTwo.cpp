
#include <iostream>
using namespace std ; 
int main() {
    

    int a = 10 ;
    int *ptr = &a ; 

    float pi = 3.55; 
    float *ptr1 = &pi ;

    cout << *ptr << endl; 
    cout << ptr1 << " " << &pi << endl; 

    return 0;
}