#include<iostream>
using namespace std;

int main(){
    int n = 7;

    // Upper half
    for(int i=1; i<=n; i++){
        // stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        
        // spaces
        for(int j=1; j<=2*(n-i); j++){
            if(i == n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }

        // stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for(int k=n; k>=1; k--){
        for(int l=1; l<=k; l++){
            cout << "*";
        }

        for(int l=1; l<=2*(n-k); l++){
            cout << " ";
        }

        for(int l=1; l<=k; l++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}