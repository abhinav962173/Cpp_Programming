#include <iostream>
using namespace std;

int linerSearch(int *arr, int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}

int main(){
   int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
   int n = sizeof(arr) / sizeof(int);
   int key = 4;

   cout << linerSearch(arr, n, key) << endl;

    return 0;
}