#include <iostream>
using namespace std;

int RotatedSearch(int *arr, int n, int target){
    int start = 0, end = n-1;

    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == target){
            return mid;
        }
        // Left half sorted
        if(arr[start] <= arr[mid]){
            if(arr[start] <= target && target < arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        // Right half sorted
        else{
            if(arr[mid] < target && target <= arr[end]){
                start = start + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int nums[] = {4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(int);

    cout << "Rotated index  is = " << RotatedSearch(nums, n, 0) << endl;
    return 0;
}