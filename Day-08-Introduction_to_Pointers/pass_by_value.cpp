#include <iostream>
using namespace std;

// Pass by value

void changeX(int x){
    x = 20;     
    cout << x << endl;
}

int main(){
    int x = 14;

    changeX(x);     // Pass by value
    cout << x << endl;     


    return 0;
}