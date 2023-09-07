#include <iostream>
#include <vector>
using namespace std;

/*  typedef = Reserved keyword used to create an additional name (alias) for another data type.
              New identifier for an existing type.
              Helps with readability and reduces typos.
              Use when there is a clear benefit.
              Replaced with 'using' (Works better w/ templates)
              Ends with _t for type.
*/

// typedef std::vector<std::pair<std::string, int>> pairlist_t 

typedef string text_t;
typedef int number_t;

int main(){

    text_t firstName = "Cacci";
    number_t age = 24;

    cout << firstName << endl;
    cout << age << endl;


    return 0;
}