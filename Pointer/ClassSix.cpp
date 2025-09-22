
#include <iostream>
using namespace std ; 
int main() {

    // int a = 10 ; 

    // int &b = a ; 

    // b = 40 ;
    // cout <<b ;


     int a = 10 ; 

    int *b = &a ; 

    *b = 40 ;
    cout << *b ;



    return 0;
}