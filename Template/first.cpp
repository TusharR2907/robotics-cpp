// A C++ template is a tool for creating generic classes or functions. This allows us to write code that works for any data type without rewriting it for each type.
// A Generic class is a class that can work with different data types without rewriting the class for each type. This is achieved using templates.
#include <bits/stdc++.h>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x>y) ? x : y;
}

int main(){

    cout << "Max of 3 and 7 is: " << myMax(3, 7) << endl;
    cout << "Max of 3.5 and 7.5 is :" << myMax<double>(3.5, 7.5) << endl;
    cout << "Max of 'g' and 'e' is: " << myMax<char>('g', 'e') << endl;
    return 0;
}