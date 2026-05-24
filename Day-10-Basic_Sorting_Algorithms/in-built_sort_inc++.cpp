#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4, 1, 5, 9, 3, 6};
    int n = sizeof(arr) / sizeof(int);

    // sort(arr, arr+n);   // Sort in Ascending Order
    sort(arr, arr+n, greater<int>());   // sort in Descending Order
    printArr(arr, n);   
    return 0;
}