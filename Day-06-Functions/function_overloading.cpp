#include<iostream>
using namespace std;

int sum(int a, int b){
    cout << "Sum is = " << a + b << endl;
    return a + b;
}

double sum(double a, double b){
    cout << "Sum is = " << a + b << endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout << "Sum is = " << a + b + c << endl;
    return a + b + c;
}

int main(){
    sum(4, 6);
    sum(41, 59);
    sum(1.5, 2.5);
    sum(15, 35, 50);

    return 0;
}