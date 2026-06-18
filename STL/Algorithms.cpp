// Sorting
// sort(arr, arr+n)
// sort(arr, arr+n, greater<int>()
// sort(v.begin(), v,end())

#include <bits/stdc++.h>
using namespace std;

// int main() {
//     vector<int> vec = {3, 5, 1, 8, 2};
//     sort(vec.begin(), vec.end());
//     sort(vec.begin(), vec.end(), greater<int>());
//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

bool comparator(pair<int, int> p1, pair<int, int> p2) {
if(p1.second < p2.second) return true;
else return false;
}

int main() {
    vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

    sort(vec.begin(), vec.end(), comparator);

    for(auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}