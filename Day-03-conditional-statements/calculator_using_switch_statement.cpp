#include <iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    char op;
    cout << "Enter Operator(+,-,*,/,%) : ";
    cin >> op;

    switch(op){
        case '+': cout << "a + b = " << (a + b);
        break;

        case '-': cout << "a - b = " << (a - b);
        break;

        case '*': cout << "a * b = " << (a * b);
        break;

        case '/': cout << "a / b = " << (a / b);
        break;

        case '%': cout << "a % b = " << (a % b);
        break;

        default: cout << "Not a Operator";
    }
   return 0;
}