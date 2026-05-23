#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int &b = a;

    b = 85;
    cout << b << endl;
    cout << a << endl;
    
    return 0;
}