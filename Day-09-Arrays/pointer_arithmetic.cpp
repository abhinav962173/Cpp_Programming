#include <iostream>
using namespace std;

void printArr(int *ptr, int n){
    for(int i=0; i<n; i++){
        cout << (*ptr + i) <<" ";
    }
}

int main(){
    int arr[] = {4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(n);
    
    printArr(arr, n);
    return 0;
}