#include<iostream>  
using namespace std;

int main(){
    float r;

    // input radius
    cout<<"Enter radius of circle: ";
    cin>>r;

    // Calculate Area of Circle
    float area = 3.14 * r * r;
    cout<<"Area of Circle is = "<< area <<endl;
    
    return 0;
}