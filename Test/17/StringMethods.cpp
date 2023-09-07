#include <iostream>
using namespace std;


int main(){
    string name;

    cout << "Enter your name: " << endl;
    getline(cin, name);

    /*      https://cplusplus.com/reference/string/string/
    1. name.length(); -> checks if the amount exceeds or does not meet limit
    2. name.empty();  -> checks if the input is empty
    3. name.clear();  -> clears the input
    4. name.append(); -> adds a string to another string
    5. name.at();     -> displays the character at given position (first character is at position 0)
    6. name.insert(); -> inserts whatever you want at the selected position
    7. name.find();   -> provides a location of the character(s) you want found
    8. name.erase();  -> erases a range of index
    */

    /*   ~~~~~ 1 ~~~~~
    if(name.length() > 12){
        cout << "Your name can't be over 12 characters" << endl;
    }
    else{
        cout << "Welcome " << name;
    }
    */

    /* ~~~~~ 2 ~~~~~
    if (name.empty()){;
        cout << "Please provide your name." << endl;
    }
    else{
        cout << "Hello " << name << endl;
    }
    */

   /* ~~~~~ 3 ~~~~~
    name.clear();
    cout << "Hello " << name;
    */

   /* ~~~~~ 4 ~~~~~
   name.append("@gmail.com");
   cout << "This is your email: " << name;
    */

   /* ~~~~~ 5 ~~~~~
   cout << name.at(0);
   */

    /* ~~~~~ 6 ~~~~~
    name.insert(0, "@");
    cout << name;
    */

   /* ~~~~~ 7 ~~~~~
    cout << name.find(" ");
    */

   name.erase(0, 6);
   cout << name;

        return 0;
}
