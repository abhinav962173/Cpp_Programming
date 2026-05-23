#include<iostream>
using namespace std;

int main(){
    int Aman_Marks[20];     // index 0 to 19
    int marks[7] = {24, 54, 65, 781, 246, 2481, 884};       // index 0 to 6
    int age[] = {45, 18, 97};       // index 0 to 2

    cout << marks[5] << endl;   // 2481
    cout << marks[8] << endl;   // garbage
    cout << marks[50] << endl;  // garbage / 0

    
    cout << age[6] << endl;     // garbage

    // length  of array
    int n = sizeof(marks) / sizeof(int);
    cout << n << endl;
    
    return 0;

}