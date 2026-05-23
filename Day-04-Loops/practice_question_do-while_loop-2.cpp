#include <iostream>
using namespace std;

int main(){
    int n;
    
    do{
        cout << "Enter the number: ";
        cin >> n;
        if(n % 10 == 0){
            continue;
        }
        cout << "You entered " << n << endl;
    }while(true);
    
    cout << endl;
    return 0;
}