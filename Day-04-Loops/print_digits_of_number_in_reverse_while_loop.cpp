#include <iostream>
using namespace std;

int main(){
    int n = 15462;
    int lastdigit;

    while(n > 0){
        lastdigit = n % 10;
        cout << lastdigit << "";
        n /= 10;
    }

    cout << endl;
    return 0;
}