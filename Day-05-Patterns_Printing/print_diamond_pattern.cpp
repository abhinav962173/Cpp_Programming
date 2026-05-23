#include<iostream>
using namespace std;

int main(){
    int n = 4;

    // Upper half
    for(int i=1; i<=n; i++){
        // spaces
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        // stars
        for(int j=1; j<=(2*i-1); j++){
            cout << "*";
        }
        // spaces
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for(int k=n; k>=1; k--){
        // spaces
        for(int l=1; l<=n-k; l++){
            cout << " ";
        }
        // stars
        for(int l=1; l<=(2*k-1); l++){
            cout << "*";
        }
        // spaces
        for(int l=1; l<=n-k; l++){
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}