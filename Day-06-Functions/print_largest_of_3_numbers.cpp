#include<iostream>
using namespace std;

int printLargest(int x, int y, int z){
    if((x > y) && (x > z)){
        return x;
    }
    else if((y > x) && (y > z)){
        return y;
    }
    else{
        return z;
    }
}

int main(){
    int result = printLargest(105, 158, 78);
    cout << "Largest number is = " << result << endl;

    return 0;
}