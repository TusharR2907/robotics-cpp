#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int* ptr = NULL;
    int** parPtr = &ptr;

    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << *(ptr) << endl;
    cout << *(&a) << endl;
    cout << parPtr << endl;
    // cout << &a << endl;
}  

// *(Derefernce operator) =  value at address like at &a it is address of a if we add *(&a) it will print value of a that is 10

