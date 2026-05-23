#include <iostream>
using namespace std;

int main(){
    int arr[10] = {54, 87, 78, 41, 65, 32, 23, 89, 65, 456};
    int min = arr[0];
    int len = sizeof(arr) / sizeof(int);

    for(int i = 0; i < len; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Smallest Number in array = " << min << endl;
    return 0;
}