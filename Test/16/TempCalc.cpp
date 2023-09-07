#include <iostream>
using namespace std;

int main(){

    string x;
    double celsius;
    double farenheit;
    double tempC;
    double tempF;
    double resultC;
    double resultF;

    cout << "Is the temperature in Celsius or Farenheit?" << endl;
    cin >> x;
    
    if (x == "Celsius" || x == "celsius"){
        cout << "Enter a temperature in Celsius: " << endl;
        cin >> tempC;
        resultF = (tempC * 9/5) + 32;
        cout << "The temperature converted from Celsius to Farenheit is: " << resultF << endl;
    }

    if (x == "Farenheit" || x == "farenheit"){
        cout << "Enter a temperature in Farenheit:" << endl;
        cin >> tempF;
        resultC = (tempF - 32) * 5/9;
        cout << "The temperature converted from Farenheit to Celsius is: " << resultC << endl;
    }
    else{
        cout << "Please provide a valid input." << endl;
    }
    return 0;
}