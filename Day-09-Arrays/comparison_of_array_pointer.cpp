#include<iostream>
using namespace std;

int main(){
    int arr[20] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr = arr;
    int *ptr2 = ptr + 3;

    cout << (ptr == arr) << endl;     // yes : true : 1
     cout << (ptr > ptr2) << endl;     // yes : true : 1
    cout << (ptr < ptr2) << endl;     // yes : true : 1

    return 0;
}