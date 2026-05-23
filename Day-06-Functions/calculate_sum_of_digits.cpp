#include <iostream>
using namespace std;

int calculateSum(int n){
    int sum = 0;
    while(n > 0){
        int lDigit = n % 10;
        sum += lDigit;
        n = n / 10;
    }
    return sum;
}

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int s = calculateSum(n);
    cout << "Sum of digits of " << n << " is = " << s << endl;

    return 0;
}