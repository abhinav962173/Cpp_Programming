#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArr1(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArr2(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArr3(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    printArr(arr, n);
}

void SelectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    printArr1(arr, n);
}

void InsertionSort(int *arr, int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    printArr2(arr, n);
}

void CountingSort(int *arr, int n){
    int freq[10000];
    int maxVal = INT32_MIN, minVal = INT32_MAX;

    for(int i=0; i<n; i++){
        freq[arr[i]++];
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }

    for(int i=minVal, j=0; i<maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = 0;
            freq[i--];
        }
    }
    printArr3(arr, n);
}

int main(){
    int arr[] = {5, 4, 3, 1, 2, 6};
    int n = sizeof(arr) / sizeof(int);

    BubbleSort(arr, n);
    SelectionSort(arr, n);
    InsertionSort(arr, n);
    CountingSort(arr, n);
    return 0;
}