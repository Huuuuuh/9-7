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

    int correct = 8;
    int questions = 10;
    double score = (double)correct/questions * 100;

    cout << score << "%" << endl;

    return 0;
}