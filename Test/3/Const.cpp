#include <iostream>
using namespace std;

int main(){
    // The const keyword specifies that a variable's value is constant.
    // Tells the compiler to prevent anything from modifying it.
    // (Read-Only) cannot be changed
    // Variable must be in CAPS

    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;    
    double radius = 10;
    double circumference = 2 * PI * radius;

    cout << circumference << "cm";


    return 0;
}