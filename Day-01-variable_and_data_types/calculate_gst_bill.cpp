#include<iostream>  
using namespace std;

int main(){
    float pencil, pen, eraser;

    // input item1
    cout<<"Enter cost of pencil: ";
    cin>>pencil;

    // input item2
    cout<<"Enter cost of pen: ";
    cin>>pen;

    // input item3
    cout<<"Enter cost of eraser: ";
    cin>>eraser;

    // Calculate total bill with gst
    float bill = pencil + pen + eraser;
    float totalBill = bill + bill * 0.18;
    cout<<"Your bill with gst is = "<< totalBill <<endl;
    
    return 0;
}