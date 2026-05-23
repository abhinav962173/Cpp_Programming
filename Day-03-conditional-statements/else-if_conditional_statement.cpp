#include <iostream>
using namespace std;

int main(){
    // check isAdult 
    bool isAdult;   
    int age;

    cout << "Enter your age: ";
    cin >> age ;

    if(age >= 18){
        isAdult = true;
    }else{
        isAdult = false;
    }

    isAdult = age >= 18 ? true : false;
    cout << isAdult <<endl;

    // Largest of 2 numbers
    int a = 45;
    int b = 15;

    int largest = a >= b ? a : b;
    cout << "Largest is = " << largest << endl;

    // Odd or Even
    int num = 13;

    bool isEven = num % 2 == 0 ? true : false;
    cout << isEven <<endl;
    return 0;
}
    