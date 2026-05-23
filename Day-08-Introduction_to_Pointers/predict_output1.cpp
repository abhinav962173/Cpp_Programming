// What will ptr2 point to in the following code:
#include<iostream>
using namespace std;

int main(){
    int x = 10, y = 15;
    int *ptr1 = &x, *ptr2 = &y;
    cout << ptr1 << ",  " << ptr2 << endl;
    ptr1 = ptr2;

    cout << ptr2 << endl;   // prints address of x
    return 0;

}