#include <iostream>
using namespace std;

int main(){
    int n = 15462;
    int lastdigit, result = 0;

    while(n > 0){
        lastdigit = n % 10;
        result = result * 10 + lastdigit;
        n /= 10;
    }

    cout << "Reverse is = " << result << endl;
    return 0;
}