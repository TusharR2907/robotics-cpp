#include <bits/stdc++.h>
using namespace std;

template <typename T> class Geek{
  public:
    T x;
    T y;

    // Constructor
    Geek(T val1, T val2) : x(val1), y(val2){
    }

    // Method to get values
    void getValues(){
        cout << x << " " << y;
    }
};

int main(){
    Geek<int> intGeek(10, 20);
    Geek<double> doubleGeek(3.14, 6.28);
    intGeek.getValues();
    cout << endl;
    doubleGeek.getValues();
    return 0;
}