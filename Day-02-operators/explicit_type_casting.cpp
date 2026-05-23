#include <iostream>
using namespace std;

int main(){
    float PI = 3.14;
    cout << (int)(PI) << endl;          // 3
    cout << (int)('A') << endl;         // 65
    cout << (int)(100/3.0) <<endl;      // 33
    cout << (int)(10/3) << endl;        // 3
    cout << ((float)10/3) << endl;      // 3.33333
    cout << ('a' + 1) <<endl;           // 98
    cout << (char)('a' + 1) <<endl;     // b

    return 0;
}