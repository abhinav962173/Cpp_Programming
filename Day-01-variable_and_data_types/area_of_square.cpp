#include<iostream>  
using namespace std;

int main(){
    int side;

    // input side
    cout<<"Enter side of square: ";
    cin>>side;

    // Calculate Area of Square
    int area = side * side;
    cout<<"Area of Square is = "<< area <<endl;
    
    return 0;
}