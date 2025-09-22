
#include <iostream>
using namespace std ; 

// void chnageA (int a ) {
//      a = 20 ; 
//     cout << a << endl; 
// }

void changeA(int *a)
{
    *a = 20 ; 
    cout <<*a  << endl; 
}
int main() {

 int b = 10 ; 
  changeA(&b);

  cout << b << endl; 
    return 0;
}