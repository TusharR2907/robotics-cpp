#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int &ref = x;

    cout << x << endl << ref; // 10
    // cout << ref;  // 10
}