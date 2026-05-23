#include<iostream>
using namespace std;

void isEven(int num){
    if(num % 2 == 0){
        cout << num << " is even number";
    }
    else{
        cout << num << " is odd number";
    }
}

int main(){
    int n;

    cout << "Enter number: ";
    cin >> n;
  
    isEven(n);
    return 0;
}