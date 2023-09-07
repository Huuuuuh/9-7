#include <iostream>
using namespace std;

/* Type conversion = Conversion of a vlue of one data type to another.
                     Implicit = Automatic
                     Explicit = Precede value with new data type (int)
*/


/*
//   IMPLICIT
int main(){
    char x = 100;

    cout << x;

    return 0;
}
*/

//  EXPLICIT
int main(){

    cout << (char)100;

    return 0;
}