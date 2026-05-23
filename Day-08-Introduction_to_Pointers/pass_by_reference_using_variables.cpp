#include <iostream>
using namespace std;

// Pass by reference using variable

void changeX(int &x){
    x = 25;    
    cout << x << endl;
}

int main(){
    int x = 14;

    changeX(x);     // Pass by reference using variable
    cout << x << endl;     


    return 0;
}