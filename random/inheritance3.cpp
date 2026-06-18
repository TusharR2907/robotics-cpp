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

class Price{
private: int Whole_sale_price;
public:
void MRP(int whole_sale){
    int mrp = whole_sale*0.30 + whole_sale;
    cout << "Robot MRP is: "<< mrp <<endl;
}


};
int main(){
    Boost r1;
    r1.name = "Tushar";
    r1.Boostspeed(10, 5);
    Price p1;
    p1.MRP(100);
}