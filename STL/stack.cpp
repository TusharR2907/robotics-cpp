#include <bits/stdc++.h>
using namespace std;

// Stack you can imagein it like books which keep it vertically one by one on other books and whenever we need some edit so we can edit from top 
// Last in First out

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    // s.pop();
    // cout << s.top() << endl;

    // while(!s.empty()){
    //     cout<< s.top()<<" ";
    //     s.pop();
    // }
    // cout << endl;

    stack<int> s2;
    s2.swap(s);
    cout << "s size: " << s.size() <<endl;
    cout << "s2 size: " << s2.size() <<endl;
    
    return 0;
}