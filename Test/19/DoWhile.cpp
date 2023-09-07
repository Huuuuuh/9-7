#include <iostream>
using namespace std;

// do while loop = does some block of code first; THEN repeat  again if the condition is true

int main(){

    int num;

    do{
        cout << "Enter a positive number: ";
        cin >> num;
    }
    while(num < 0);

    cout << "Your number is: " << num;

    return 0;
}
