#include <iostream>
using namespace std;

// Pass by reference using pointer

void changeX(int *x){
    *x = 25;    
    cout << *x << endl;
}

int main(){
    int x = 14;

    changeX(&x);     // Pass by reference using pointer
    cout << x << endl;     


    return 0;
}