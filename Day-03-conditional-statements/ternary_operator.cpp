#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1 ;

    cout << "Enter second number: ";
    cin >> num2 ;

    cout << "Enter second number: ";
    cin >> num3 ;

    if((num1 == num2) && (num2 == num3)){
        cout << num1 << ", " << num2 << " &" << num3 << " are equal" <<endl;
    }
    else if(num1 > num2){
        if(num1 > num3){
            cout << num1 << " is the largest number" <<endl;
        }
        else{
            cout << num3 << " is the largest number" <<endl;
        } 
    }
    else if(num2 > num3){
        cout << num2 << " is the largest number" <<endl;
    }
    else{
        cout << num3 << " is the largest number" <<endl;
    }
    return 0;
}