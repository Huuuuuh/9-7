#include <iostream>
using namespace std;

/* Namespace = Provides a solution for preventing name conflicts in large projects. 
               Each entity needs a unique name.
               A namespace allows for indentically named entities as long as the namespaces are different.
*/ 


namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    using namespace second;

    cout << first::x;

    return 0;
}
          