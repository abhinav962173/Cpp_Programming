#include <iostream>
using namespace std;

int main(){
    const float PI = 3.14;  // must be initialized
    const float g = 9.8;
    cout << PI <<endl;
    cout << g <<endl;


    /* not allowed
        const int n;
        n = 25;
        const n = 25;
        n = 35;
    */
    return 0;
}