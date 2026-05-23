#include<iostream>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT32_MIN;
    for(int start = 0; start < n; start++){
        int currSum = 0;
        for(int end = start; end < n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum SubArray Sum is = " << maxSum;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum(arr, n);
    return 0;
}