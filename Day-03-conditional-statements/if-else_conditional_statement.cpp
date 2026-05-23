#include <iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age ; 

    if(age >= 18){
        cout <<"You can vote" <<endl;
    }
    if(age > 21){
        cout << "Contest for elections" <<endl;
    }
    else{
        cout << "You can't vote" <<endl;
    }

    return 0;
}