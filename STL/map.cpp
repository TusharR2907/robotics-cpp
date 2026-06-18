//MAp - an associative container that stores data as sorted, unique key-value pairs
// synatx= map<string, int> m;
// m[key] = value; 
// function = insert, emplace, count, erase, find, size, empty, erase
#include <bits/stdc++.h>
using namespace std;
// int main() {
//     map<string, int> m;

//     m["tv"] = 100;
//     m["laptop"] = 100;
//     m["headphones"] = 50;
//     m["tablet"] = 120;
//     m["watch"] = 50;

//     for(auto p: m) {
//         cout << p.first << "   " << p.second << endl;
//     }
//     return 0;
// }

// Mutlimap

int main() {
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    m.erase(m.find("tv"));

    for(auto p: m) {
        cout << p.first << "  " << p.second << endl;
    }
    return 0;

}
// there is underorderd map in which we can out any key value without sorted