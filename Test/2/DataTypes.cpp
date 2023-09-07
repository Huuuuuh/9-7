#include <iostream>
using namespace std;

int main(){

    //integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //char (single/ONE character)
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = true;

    //string (objects that represents a sequence of text)
    string name = "Cacci";
    string day = "Friday";
    string food = "Pizza";
    string address = "123 Fake Street";

    cout << age << year << days << endl;
    cout << price << gpa << temperature << endl;
    cout << grade << initial << currency << endl;

    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old";

    return 0;
}