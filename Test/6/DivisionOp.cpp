#include <iostream>
using namespace std;

// Arithmetic operators = Return the result of a specific arithmetic operation (+ - * /)
/* Order of Operations: 1. Parenthesis
                        2. Multiplication & Division
                        3. Addition & Subtraction
*/

int main(){
    int students = 20;
    int remainder = students % 3;

    // students = students / 2;
    students /= 3;
    cout << students << endl;
    cout << remainder;

    return 0;
}