#include<iostream>
using namespace std;

int printFactorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    cout << "Factorial of " << n << " is = " << fact << endl;
    return fact;
}

int main(){
    printFactorial(0);
    printFactorial(1);
    printFactorial(2);
    printFactorial(3);
    printFactorial(4);
    printFactorial(5);
    printFactorial(6);
    
    return 0;
}