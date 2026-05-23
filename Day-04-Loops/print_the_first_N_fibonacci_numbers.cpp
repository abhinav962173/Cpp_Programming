#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; 
    int fibo;

    cout << "Enter number: ";
    cin >> n;
    
    int a = 0, b = 1;

    for(int i=1; i<=n; i++){
        cout << a << " ";       // initial print
        int next = a + b;       // next number
        a = b;                  // update a
        b = next;               // update b
    }
     
    return 0;
}