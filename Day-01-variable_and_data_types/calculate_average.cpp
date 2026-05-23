#include<iostream>  
using namespace std;

int main(){
    float science, maths, hindi;

    // input a
    cout<<"Enter science marks: ";
    cin>>science;

    // input b
    cout<<"Enter maths marks: ";
    cin>>maths;

    // input c
    cout<<"Enter hindi marks: ";
    cin>>hindi;

    // Calculate sum
    float average = (science + maths + hindi) / 3;
    cout<<"Average marks is = "<< average <<endl;
    
    return 0;
}