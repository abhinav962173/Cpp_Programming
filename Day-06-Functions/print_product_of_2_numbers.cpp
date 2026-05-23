#include<iostream>
using namespace std;

int product(int x, int y){
    return x * y;
}

int main(){
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int p = product(a, b);
    cout << "Product is = " << p;
    return 0;
}