#include<iostream>
using namespace std;

int main(){
    int a = 12;
    int *aptr = &a;

    cout << aptr << endl;
    aptr++;     // increment 1 int
    cout << aptr << endl;

    aptr--;     // decrement 1 int
    cout << aptr << endl;
    
    return 0;
}