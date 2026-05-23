#include <iostream>
using namespace std;

int num = 100;     // Global scope

void sum(int a, int b){
    cout << "Num is = " << num << endl;
    int sum = a + b;    // Local scope
    cout << "Sum is = "<< sum << endl;
}

int main(){
    sum(78, 12);
    int s = 45;     // Local scope
    cout << "Num is = "<< num << endl;

    return 0;
}

