#include <iostream>
#include <cmath>
using namespace std;

// if statements = Will do something, if a condition is true.
//                 If not, then won't do it.
// Top to bottom, runs by priority.


int main(){

    int age;

    cout << "Enter your age: " << endl;
    cin >> age;

    if(age >= 100){
        cout << "I doubt you're that old, but welcome!" << endl;
    }
    else if(age >= 18){
        cout << "Welcome to the site!" << endl;
    }
    else if(age < 0){
        cout << "You haven't been born yet!" << endl;
    }
    else{
        cout << "You're too youngP :( " << endl;
    }


    return 0;
}