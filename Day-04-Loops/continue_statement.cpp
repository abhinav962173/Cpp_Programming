#include <iostream>
using namespace std;

int main(){
    int j = 2;
    
    for(int i=0; i<=10; i++){
        if(i % 2 == 0){
            continue;
        }
        cout << i << " ";
        
    }

    cout << endl;


    while(j <= 10){
        if(j == 5){
            continue;
        }
        cout << j << " ";
        j++;
    }

    cout << endl;
    return 0;
}