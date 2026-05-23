#include <iostream>
using namespace std;

int main(){
    int i = 10, j = 2;
    
    do{
        cout << i << " ";
        i++;
    }while(i <= 20);

    cout << endl;

    
    do{
        cout << j << " ";
        j++;
    }while(j >= 5);

    cout << endl;
    return 0;
}