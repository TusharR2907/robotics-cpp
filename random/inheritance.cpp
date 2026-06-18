#include <bits/stdc++.h>
using namespace std;

class Robots{
    private: int password;
    public:
    string name;
    string assign;
};

class Move: public Robots{
    public:
    int speed;
    void Speed(int speed){
        cout << "Robots moving at: " << speed<<endl;
    }
};
int main(){
    Move r1;
    r1.Speed(10);
}