#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<string, int> p1, pair<string, int> p2) {
    return p1.second < p2.second;
}

int main() {
    vector<pair<string, int>> vec = {
        {"Temp", 56},
        {"Speed", 100},
        {"Humidity", 21},
        {"Pressure", 56},
        {"Voltage", 12}
    };

    sort(vec.begin(), vec.end(), comparator);

    // Store in map
    map<string, int> mp;

    for (auto p : vec) {
        mp[p.first] = p.second;
    }

    cout << "Vector (sorted by value):\n";
    for (auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    cout << "\nMap (sorted by key):\n";
    for (auto p : mp) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}