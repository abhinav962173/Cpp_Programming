// What will be the output of the following code:
#include<iostream>
using namespace std;

void  multilpleBy2(int &a, int &b, int &c){
    a *= 2;
    b *= 2;
    c *= 2;
}

int main(){
    int x = 1, y = 2, z = 3;
    multilpleBy2(x, y, z);
    cout << x << y << z << "\n";    //2 4 6
    return 0;

}