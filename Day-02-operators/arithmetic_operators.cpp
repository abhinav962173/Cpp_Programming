#include <iostream>
using namespace std;

int main(){
    //  Arithmetic Operators

    //  1. Binary Arithmetic Operator

    int a = 10;
    int b = 2;

    cout << "+ " << (a + b) << endl;    // 12 
    cout << "- " << (a - b) << endl;    // 8
    cout << "* " << (a * b) << endl;    // 20
    cout << "/ " << (a / b) << endl;    // 5
    cout << "% " << (a % b) << endl;    // 0
    
    // 2. Unary Arithmetic Operator

    int x = 15;
    cout << "...++ " << x++ <<endl;    // post-increment operator : 15
    cout << "++... " << ++x <<endl;    // pre-increment operator : 17

    int y = 20;
    cout << "...-- " << y-- <<endl;    // post-ecrement operator : 20
    cout << "--... " << --y <<endl;    // pre-ecrement operator : 18

    return 0;
}