#include <iostream>
using namespace std;

int main(){
    int n = 5;
    // outer loop
    for(int i=1; i<=n; i++){    // row loop
        int val = i;
        // inner loop
        for(int j=1; j<=n; j++){    // column loop
            // work
            cout << val << " ";
        }
        cout << endl;   // move to next row after row is done
    }
    return 0;
}