#include<iostream>
using namespace std;

char character(char ch){
    if(ch == 'z'){
        return 'a';
    }
    else if(ch == 'Z'){
        return 'A';
    }
    return ++ch;
}

int main(){
    char ch = 'T';
    char result = character(ch);
    cout << "Character that occurs after " << ch << " is = " << result << endl;
    return 0;
}