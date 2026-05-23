#include<iostream>
using namespace std;

int main(){
    int arr[5];

    int n = sizeof(arr) / sizeof(int);      // length of array

    // Input values
    for(int idx = 0; idx < n; idx++){
        cout << "Enter the value of index(" << idx << "): ";
        cin >> arr[idx];
    }

    // Output values 
    for(int idx = 0; idx < n; idx++){
        cout << arr[idx] << " ";
    }
    return 0;
}