#include <iostream>
using namespace std;

int main(){
    int n = 15654;
    int sum = 0, ldigit, rem;

    while(n > 0){
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    cout << "Sum of digits of n = " << sum << endl;
    
    return 0;
}