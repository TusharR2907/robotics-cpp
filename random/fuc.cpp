#include <bits/stdc++.h>
using namespace std;


int accelerate(int current_speed, int boost){
    // cout << boost;
    return current_speed+boost;
}

int main(){

    int acc = accelerate(10,5);
    cout << "Robots acceleration is: " << acc << endl;
    return 0;


}
 