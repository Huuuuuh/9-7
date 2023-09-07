#include <iostream>
#include <cmath>
using namespace std;


int main(){

    double a;
    double b;
    double c;


   cout << "What is the value of a? " << endl;
    cin >> a;

    cout << "What is the value of b? " << endl;
    cin >> b;

    c = sqrt (pow(a, 2) + pow(b, 2));

    cout << "The value of the hypotenuse is: " << c << endl;

    return 0;
}