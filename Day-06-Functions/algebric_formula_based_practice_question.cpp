#include<iostream>
#include<math.h>
using namespace std;

int function(int x, int y){
    return pow(x, 2) + pow(y, 2) + 2 * (x * y);
}

int main(){
    int result = function(4, 2);
    cout << "Result is = " << result << endl;
    
    return 0;
}