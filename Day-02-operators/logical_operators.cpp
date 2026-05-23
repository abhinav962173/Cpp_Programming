#include <iostream>
using namespace std;

int main(){
    //  Logical Operators   

    // 1. And operator (&&)
    cout << ((3 < 5) && (10 > 5)) <<endl;    // 1 -> true 
    cout << ((3 > 5) && (10 > 5)) <<endl;    // 0 -> false
    cout << ((100 < 5) && (20 < 5)) <<endl;    // 0 -> false

    // 2. Or operator (||) 
    cout << ((3 > 5) || (10 > 5)) <<endl;    // 1 -> true
    cout << ((10 > 5) || (100 > 50)) <<endl;    // 1 -> true
    cout << ((100 < 5) || (20 < 5)) <<endl;    // 0 -> false
   
    // 3. Not Operator (!)
    cout << (3 == 5) <<endl;    // 0 -> false
    cout << !(3 == 5) <<endl;    // 1 -> true
    return 0;
}