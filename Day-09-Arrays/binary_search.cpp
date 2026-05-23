#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int st = 0;
    int end = n-1;

    while(st <= end){
        int mid = (st + end) / 2;
        if(arr[mid] == key){
            return mid;     // key found
        }
        else if(arr[mid] < key){
            st = mid + 1;   // 1st half
        }
        else{
            end = mid - 1;   // 2nd half
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    int key = 17;

    cout << binarySearch(arr, n , key) << endl;
    return 0;
}