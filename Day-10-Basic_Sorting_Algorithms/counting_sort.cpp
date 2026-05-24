#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int *arr, int n){
    int freq[10000];  // range
    int minVal = INT_FAST32_MAX, maxVal = INT32_MIN; 

    // 1st Step - 0(n)
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 2nd Step - 0(range) = max - min
    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = 0;
            freq[i]--;
        }
    }

    printArr(arr, n);
}

int main(){
    int arr[] = {1, 3, 4, 1, 6, 4, 3};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr, n);
    return 0;
}