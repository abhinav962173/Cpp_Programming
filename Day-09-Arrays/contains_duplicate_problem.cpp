
#include <iostream>
using namespace std;

bool ContainsDublicate(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int nums[] = {5, 1, 3, 4, 6, 8, 9, 1};
    int n = sizeof(nums) / sizeof(int);

    cout << ContainsDublicate(nums, n) << endl;
    return 0;
}