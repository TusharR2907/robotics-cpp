#include <bits/stdc++.h>
using namespace std;

// increment(++)/Decrement(--)

int main(){
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl;
    ptr++; // ++ means 1 add = 4 bytes space add 
    cout << ptr << endl;
    ptr--; // -- means 1 minus = 4 bytes space add 
    cout << ptr << endl;
    return 0;
}
