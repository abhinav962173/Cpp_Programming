#include <iostream>
using namespace std;

int main(){
    int j = 2;
    
    for(int i=0; i<=10; i++){
        cout << i << " ";
        if(i == 5){
            break;
        }
    }

    cout << endl;

    while(j <= 10){
        cout << j << " ";
        if(j == 4){
            break;
        }
        j++;
    }

    cout << endl;
    return 0;
}