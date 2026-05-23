#include <iostream>
using namespace std;

int main(){
    int n = 128654;
    int sum = 0, lastdigit;

    while(n > 0){
        lastdigit = n % 10;
        if(lastdigit % 2 != 0){
            sum += lastdigit;
        }
        n /= 10;
    }
    cout << "Sum of odd digits of n = " << sum << endl;
    
    return 0;
}