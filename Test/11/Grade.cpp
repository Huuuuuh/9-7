#include <iostream>
#include <cmath>
using namespace std;

// Switch = Alternative to using many "else if" statements
//          compare one value against matching cases


int main(){

    char grade;

    cout << "Enter letter grade (A/B/C/D/F): " << endl;
    cin >> grade;

    switch (grade){
        case 'A':
            cout << "You did great!";
            break;
        case 'B':
            cout << "Garbage!";
            break;
        case 'C':
            cout << "Are you even asian?!";
            break;
        case 'D':
            cout << "You are failure!";
            break;
        case 'F':
            cout << "Disowned!";
            break;
        default:
            cout << "Enter an appropriate letter grade (A/B/C/D/F)" << endl;

    }




    return 0;
}