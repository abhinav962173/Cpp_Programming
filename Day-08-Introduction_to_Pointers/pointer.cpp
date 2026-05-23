#include <iostream>
using namespace std;

int main(){
    int a = 45;
    int *ptr = &a;
    int **pptr = &ptr;

    float pi = 3.14;
    float *ptr2 = &pi;
    float **pptr2 = &ptr2;


    cout << sizeof(ptr) << endl;    // prints the size of address of variable a;
    cout << sizeof(ptr2) << endl;   // prints the size of address of variable pi;
    cout << sizeof(pptr) << endl;   // prints the size of address of variable ptr;
    cout << sizeof(pptr2) << endl;   // prints the size of address of variable ptr2;

    cout << ptr << "  ";    // prints address of variable a.
    cout << *ptr << endl;   // prints value at address of a.

    cout << *pptr << "  ";  // prints address of variable ptr.
    cout << **pptr << endl; // prints value at address of pptr.

    cout << ptr2 << "  ";  // prints address of variable pi.
    cout << *ptr2 << endl;  // prints value at address of pi.

    cout << &ptr << " = " << pptr <<"\n";

    return 0;
} 