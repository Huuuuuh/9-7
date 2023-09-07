#include <iostream>
#include <cmath>
using namespace std;


int main(){
    char op;
    double num1;
    double num2;
    double result;

    cout << "******** CALCULATOR *********\n" << endl;

    cout << "Enter (+ - * /): ";
    cin >> op;

    cout << "Enter #1: ";
    cin >> num1;

    cout << "Enter #2: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Please type in an appropriate response!" << endl;
    }

    cout << "Your result is: " << result << endl;


    return 0;
}