// What will be the output of the following code:
#include<iostream>
using namespace std;

int main(){
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch; 

    cho += a;       // a
    *ptr += ch;     // 129  
    cout << a << ", " << ch << endl;        // 129, a
    return 0;

}