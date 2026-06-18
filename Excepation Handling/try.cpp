#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        int a = 10, b = 0;
        if (b == 0) {
            throw "Division by zero is not allowed";
        }
        cout << a / b;
    }
    catch (const char* msg) {
        cout << "Exception Caught: " << msg;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int x = 7;
//     try {
//         if (x % 2 != 0) {
//             // Throwing integer exception
//             throw -1;
//         }
//     }
//     catch (int e) {
//         cout << "Exception Caught: " << e;
//     }
//     return 0;
//}