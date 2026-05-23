#include <iostream>
using namespace std;
int MaxProductSubarray(int *arr, int n){
    int maxProduct = INT32_MIN;

    for(int start=0; start<n; start++){
        int product = 1;
        for(int end=start; end<n; end++){
            product = product * arr[end];
   
            if(product > maxProduct){
                maxProduct = product;
            }
        }
    }
    return maxProduct;
}

int main(){
    int nums[] = {2,3,-2,4};
    int n = sizeof(nums) / sizeof(int);

    cout << MaxProductSubarray(nums, n) << endl;
    return  0;
}