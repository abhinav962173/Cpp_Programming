#include <iostream>
using namespace std;

int main(){
    cout << (100/3) << endl;    // 33
    cout << (100/3.0) <<endl;   // 33.3333
    cout << 'a' + 0 <<endl;     // asci value of a = 97
    cout << 'A' - 0 <<endl;     // asci value of A = 65
    cout << 'a' + 5 <<endl;     // 97 + 5 -> 102
    cout << 'A' + 1 <<endl;     // 65 + 1 -> 66
    

    /*      ** Hierarchy of Implicit Coversion **

    bool -> char -> int -> float -> double

    bool v/s char -> char
    char v/s int -> int
    int v/s float -> float
    float v/s double -> double

    */

    return 0;
}