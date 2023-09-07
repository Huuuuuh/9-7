#include <iostream>
using namespace std;

// return = returns a value back to the spot
//          where you called the encompassing function.

double square(double length);
double cube(double length); 


double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}

int main(){

    double length;
    double area = square(length);
    double volume = cube(length);
    cout << "Enter a length (cm): ";
    cin >> length; 

    cout << "The area of " << length << " is " << area << " cm^2!" << endl;
    cout << "The volume of " << length << " is " << volume << " cm^3!" << endl;

    return 0;
}
