#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Hello World ";
}

int main(){
    int arr[] = {1, 5, 15, 17, 5, 85, 33};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);
    
    return 0;
}