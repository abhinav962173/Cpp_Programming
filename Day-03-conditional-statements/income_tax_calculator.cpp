#include <iostream>
using namespace std;

int main(){
    float income, tax;

    cout << "Enter your income (in lakhs): ";
    cin >> income ;

    if(income < 5){
        tax = 0;
    }
    else if(income >= 5 && income <= 10){
        tax = 0.20 * income;
    }
    else if(income > 10){
        tax = 0.30 * income;
    }

    cout << "Tax = " << (tax * 100000) << endl;
    return 0;
}
    