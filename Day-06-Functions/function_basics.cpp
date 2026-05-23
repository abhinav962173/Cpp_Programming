#include <iostream>
using namespace std;

void sayhello(){        // function declaration
    cout << "Hello I am abhinav kumar dubey.";      // function definition
}

void assistant(){      
    sayhello();     // function call
    cout << "Work Done \n";     // function definition 
}

int main(){
    assistant();    // function call 
    return 0;
}

