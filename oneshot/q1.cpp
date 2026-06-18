#include <bits/stdc++.h>
using namespace std;

int main(){
    float English = 89;
    float maths = 80;
    float Hindi = 70;
    float science = 90;
    float SST = 78;
    float Total =  (English + maths + Hindi + science + SST);
    int Max_Marks = 500;
    float total_percentage = (Total/Max_Marks)*100.0;
    cout<<total_percentage;


}