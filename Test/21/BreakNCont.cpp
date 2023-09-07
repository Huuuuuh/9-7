#include <iostream>
using namespace std;

// break = break out of a loop
// continue = skip current iteration 

int main(){

    for(int i=0; i<=20; i++){
        if(i==13){
            //break;                   // cuts off numbers from 13 and up
            continue;                  // removes number 13
        }
        cout << i << endl;
    }
    return 0;
}