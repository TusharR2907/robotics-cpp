//Set = container of uniquw value
//function=  insert, emplace, count, erase, find, size, empty, erase
// lower_bound(x) - means x is present in set so it print x otherwise just greater than x 
// upper_bound(x) - means print just greater than x 
// it's also have multiset and unorderset but in unorderset we can't use upper and lower bound
#include <bits/stdc++.h>
using namespace std;    

int main() {
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    cout << "lower bound =" <<* (s.lower_bound(4)) << endl; //4
    cout << "upper bound=" <<* (s.upper_bound(4)) << endl; //5

    cout << s.size() << endl;
    for(auto val : s) {
        cout << val << " ";
    }

    cout << endl;

return 0;
}