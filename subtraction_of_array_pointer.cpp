#include<iostream>
using namespace std;

int main(){
    int arr[20] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr = arr;
    int *ptr2 = ptr + 3;

    cout << *ptr << endl;
    cout << *ptr2 << endl;

    cout << ptr2 - ptr << endl;     // Difference of two pointers

    return 0;
}