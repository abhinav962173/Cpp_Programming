#include <iostream>
using namespace std;

int main(){
    int n, n1, lastdigit, power = 0;

    cout << "Enter number(3-digit): ";
    cin >> n;
    
    n1 = n;

    while(n1 > 0){
        lastdigit = n1 % 10;
        power += lastdigit * lastdigit * lastdigit;
        n1 /= 10;
    }

    cout << power << endl;

    if(power == n){
        cout << n << " is an Armstrong number" << endl;
    }else{
        cout << n << " is not an Armstrong number" << endl;
    }
    
    return 0;
}