#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream file("define.txt");
    string s;

    getline(file, s);

    cout << "Read String: " << s;

    file.close();

    return 0;
}