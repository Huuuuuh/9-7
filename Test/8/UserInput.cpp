#include <iostream>
using namespace std;

// cout << (insertion operator)
// cin >> (extraction operator)
// getline() can be used for user inputs including spaces
// getline(cin >> ws,name); Can be used if you want to use getline after cin to remove buffer


int main(){

    string name;
    int age;

    cout << "What's your full name?" << endl;
    getline(cin >> ws, name);

    cout << "How old are you?" << endl;
    cin >> age;

    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;

    return 0;
}