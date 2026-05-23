#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, rem1, rem2, rem3;

    cout << "Enter number(3-digit): ";
    cin >> num1;

    if(num1 > 0 && num1 < 1000){
        rem1 = num1 % 10;   // last digit
        num2 = num1 / 10;

        rem2 = num2 % 10;   // middle digit
        num3 = num2 / 10;

        rem3 = num3 % 10;   // first digit

        if((rem1 * rem1 * rem1) + (rem2 * rem2 * rem2 ) + (rem3 * rem3 * rem3) == num1){
            cout << num1 << " is an Armstrong number";
        }
        else{
            cout << num1 << " is not an Armstrong number";
        }
    }

    
    return 0;
}