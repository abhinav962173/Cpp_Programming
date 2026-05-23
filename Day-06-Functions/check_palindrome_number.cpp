#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int lDigit = 0;
    int rev = 0;
    int original = n;

    while(n > 0){
        lDigit = n % 10;
        rev = rev * 10 + lDigit;
        n = n / 10;
    }
    if(original == rev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = isPalindrome(n);
    cout << result << endl;
    return 0;
}