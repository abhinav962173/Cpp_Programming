#include <iostream>
using namespace std;

int main(){
    int a = 63, b = 36;

    bool x = (a < b) ? true : false;    // 0
    int y = (a > b) ? true : false;     // 1

    cout << x << "," << y << endl;

    return 0;
}