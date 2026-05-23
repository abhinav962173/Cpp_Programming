#include<iostream>
using namespace std;

int sum(int a, int b=1){  // a and b  are parameters
    int sum = a + b;
    return sum;
}

int diff(int a, int b=1){  // a and b  are parameters
    int diff = a - b;
    return diff;
}

int main(){
    int s = sum(45, 98);    // 45 and 98 are arguments
    int s1 = sum(98);       
    int d = diff(54, 25);   // 54 and 25 are arguments
    int d1 = diff(100);

    cout << "Sum is = " << s << "\n";
    cout << "Sum is = " << s1 << "\n";
    cout << "Difference is = " << d << "\n";
    cout << "Difference is = " << d1 << "\n";
    return 0;
}