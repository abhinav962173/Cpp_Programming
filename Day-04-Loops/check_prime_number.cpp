#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    bool isPrime = true;

    cout << "Enter number: ";
    cin >> n;
    
    if(n == 1){
        cout << n << " is neither prime nor composite number";
    }
    else{
        for(int i=2; i<=sqrt(n); i++){      // or i <= n-1  or i <= n/2
            if(n % i == 0){ 
                isPrime = false;
                break;
            }
        }
        if(isPrime == false){
            cout << n << " is a composite number." << endl;
        }
        else{
            cout << n << " is a prime number." << endl;
        }
    }
     
    return 0;
}