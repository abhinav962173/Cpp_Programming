#include <iostream>
using namespace std;

int main(){
    int n, sum;

    cout << "Enter the value of n: ";
    cin >> n;
    sum = 0;

    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "Sum of n natural numbers = " << sum << endl;
    
    return 0;
}