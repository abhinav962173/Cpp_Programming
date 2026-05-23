#include<iostream>  
using namespace std;

int main(){
    int a, b;

    // input a
    cout<<"Enter first number: ";
    cin>>a;

    // input b
    cout<<"Enter second number: ";
    cin>>b;

    // Calculate sum
    int sum = a + b;
    cout<<"Sum is = "<< sum <<endl;

    // Calculate difference
    int diff = a - b;
    cout<<"Difference is = "<< diff <<endl;

    // Calculate product
    int product = a * b;
    cout<<"Product is = "<< product <<endl;

    // Calculate divide
    int div = a / b;
    cout<<"Div is = "<< div <<endl;
    
    return 0;
}