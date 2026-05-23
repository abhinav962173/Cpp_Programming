#include <iostream>
using namespace std;

int main(){
    int arr[5] = {7465, 8, 999, 6, 97};
    int max = arr[0];

    int len = sizeof(arr) / sizeof(int);
    for(int i = 0; i < len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Largest Number in array = " << max << endl;
    return 0;
}