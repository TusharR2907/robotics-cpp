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

class Boost: public Move{
    public:
    int boost;
    void Boostspeed(int speed, int boost){
        cout << "Robots name is: " << name<<endl;
        cout << "Robots wil move at: " << speed+boost << " m/s "<< endl;

    }
};
int main(){
    Boost r1;
    r1.name = "Tushar";
    r1.Boostspeed(10, 5);
}