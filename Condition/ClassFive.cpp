
#include <iostream>
using namespace std ; 
int main() {

// large number find 
    int a , b ,  c ;
    cout << "enter a : " ; 
    cin >> a ; 

    cout << "enter b : " ; 
    cin >> b ; 
    
    cout << "enter c : " ; 
    cin >> c ; 


    if(a>=b && a>=c){
        cout<<"a large number";
    }
    else if( b >=c ){
        cout<< "b is large";
    }
    else{
        cout<<"C is large ";
    }

    return 0;
}