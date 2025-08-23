
#include <iostream>
using namespace std ; 
int main() {

                 int day ; 
                 cout << " enter the day" << endl ; 
                 cin >> day ; 
    switch(day){

        case 1 : cout << "Monday" <<endl ; 
        break; 

        case 2 : cout<< "wednasday" << endl ; 
        break; 


        case 3 : cout << "Friday" << endl ;
        break; 


            case 4 : cout << "Saturday" << endl ;
        break; 



    case  5: cout << "sunday" << endl ;
        break; 



        case 6 : cout << "Tuesday " << endl ;
        break; 

        default : cout << "No name match" << endl ; 

    }
    return 0;
}