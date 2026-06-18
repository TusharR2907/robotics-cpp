// pointer store address of variable like x = 10 and x store in 1000 then it's pointer is 1000 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int *p = &x;
    cout << p << endl << x;
}