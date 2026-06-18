#include <bits/stdc++.h>
using namespace std;

class Robot{
    private: int speed;
    public:  
    Robot(int speed, int boost) : speed(speed + boost) {}
    void move(){
        cout << "Moving at: " << speed << endl;
    }
    void accelerate(int boost){
    speed += boost;
    cout << "Boosted by: " << boost << endl;  // endl add kar
}
    
    
};

int main(){
    Robot r1(10,5);
    r1.move();   
    r1.accelerate(5);
}