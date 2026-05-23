#include <iostream>
using namespace std;

int main(){
    /* Predict output of: 
    Question 1. */

    int x = 2, y = 5;
    int exp1 = (x * y / x);
    int exp2 = (x * (y / x));
    cout << exp1 << ",";    // 5
    cout << exp2 << "\n";   // 4

    /* Predict output of: 
    Question 2. */

    int a = 10, b = 5;
    int exp3 = (b * (a / b + a / b));
    int exp4 = (b * a / b + b * a / b);
    cout << exp3 << " ";    // 20
    cout << exp4 << "\n";   // 20

    /* Predict output of: 
    Question 3. */
    
    int p = 200, q = 50, r = 100;
    if(p > q && q > r){
        cout << "Hello \n";
    }

    if(r > q && r < p){
        cout <<"C++ \n";    // C++ (only prints)
    }

    if((q+200) < p && (q+150) < r){
        cout << "Hello C++ \n";
    }
    return 0;
}