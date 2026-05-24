#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){      // (>)> -> ascending sorting     (<) -> ascending sorting
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(! isSwap){
            // array is already sorted
            return;
        }
    }
    printArr(arr, n);
}

int main(){
    // int arr[5] = {5, 4, 1, 3, 2};
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // O(1, 1)

    BubbleSort(arr, 10);
    return 0;
}