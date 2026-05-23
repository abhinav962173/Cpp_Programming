#include<iostream>  
using namespace std;

int main(){
    // Primitive Data Types

    int a = 82;     // 4 bytes or 32 bits
    char star = '*';    // 1 byte or 8 bits
    float b = 100.00;   // 4 bytes or 32 bits
    bool c = "true";    // 1 byte or 8 bits
    bool e = "false";   // 1 byte or 8 bits
    double d = 8000000000;  // 8 bytes or 64 bits

    cout<< "size of int = " << sizeof(int) <<endl;
    cout<< "size of float = " << sizeof(float) <<endl;
    cout<< "size of char = " << sizeof(char) <<endl;
    cout<< "size of bool = " << sizeof(bool) <<endl;
    cout<< "size of double float = " << sizeof(double) <<endl;
    return 0;
}