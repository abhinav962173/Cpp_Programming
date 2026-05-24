#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int *arr, int n){
    for(int i=i; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }

    printArr(arr, n);
}

int main(){
    int arr[] = {5, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    InsertionSort(arr, n);
    return 0;
}