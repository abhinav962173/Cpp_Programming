#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, n1, n2, lastdigit, power = 0;
    int digits = 0;

    cout << "Enter number: ";
    cin >> n;
    
    n1 = n2 = n;

    while(n2 > 0){
        n2 /= 10;
        digits++;
    }

    while(n1 > 0){
        lastdigit = n1 % 10;
        power += (int)pow(lastdigit, digits);
        n1 /= 10;
    }

    if(power == n){
        cout << n << " is an Armstrong number" << endl;
    }
    else{
        cout << n << " is not an Armstrong number" << endl;
    }
    
    return 0;
}