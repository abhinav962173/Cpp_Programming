#include<iostream>  
using namespace std;

int main(){
    float P, R, T;

    // input principle
    cout<<"Enter principle amount: ";
    cin>>P;

    // input rate
    cout<<"Enter rate of interest: ";
    cin>>R;

    // input time
    cout<<"Enter time in years: ";
    cin>>T;

    // Calculate Simple Interest
    float SI = (P * R * T) / 100;
    cout<<"Simple Interest is = "<< SI <<endl;
    
    return 0;
}