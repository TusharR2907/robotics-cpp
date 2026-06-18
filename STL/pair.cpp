#include <bits/stdc++.h>
using namespace std;

// int main(){
//     pair<int,int> p = { 3,5}; // We can change int to string double etc 
//     cout << p.first <<  endl;
//     cout << p.second << endl;
// }

// int main() {
//     pair<int,pair<int,int>> p = {3,{5,4}};
//     cout << p.first <<  endl;
//     cout << p.second.first << endl;
// }

int main(){
    vector<pair<int,int>> vec = {{ 3,5},{2,3}};

    vec.push_back({3,4}); // just insert
    vec.emplace_back(4,5); //in-place object create(agr pair me value hai vec me to pair me hi insert karega)

    for(pair<int, int> p: vec){  // pair<int,int> instead of this we can use auto
        cout << p.first << " " << p.second << endl;

    }
    return 0;
}