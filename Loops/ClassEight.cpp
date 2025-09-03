
#include <iostream>
using namespace std ; 
int main() {

    int n =1 ; 

    while(n <= 10) 
    {
         if(n==4)
         {
            break;
         }
        cout << n << endl ; 
        n++; 
    }

    cout << " end Of loop" << endl ;
    return 0;
}