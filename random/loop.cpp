#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i < 50) {
            cout << "Speed is increasing: " << i << " m/s\n";
        } else {
            cout << "Speed is 50 m/s\n";
        }
    }
    return 0;
}