#include <iostream>
using namespace std;

int main(){
    int a = 15;
    int *ptr = NULL;
    cout << ptr << "\n";

    cout << *ptr << "\n";   // segmentation fault

    return 0;
}