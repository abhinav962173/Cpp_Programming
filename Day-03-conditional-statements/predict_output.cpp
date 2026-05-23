#include <iostream>
using namespace std;

int main(){
    int a = 5;

    if(++a*5 <= 25){
        cout <<"Hello\n";
    }else{
        cout <<"Bye\n";     // output = bye ; because 6 * 5 = 30 not less than or equal to 25
    }

    return 0;
}