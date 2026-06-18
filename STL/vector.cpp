#include <bits/stdc++.h>
using namespace std;
// Vector is like array but array have limited size means if we crate a array then i can't change it's size but in vector we can change resize/dynamic it.
int main(){
    // vector<int> vec1(3,10); // its create 3 elemet in vector all element is 10 
    // vector<int> vec(vec1);
    vector<int> vec = {1,2,3,4,5};
    // vector<int> vec; way of create 0 element vector

    // vec.push_back(1);  
    // vec.push_back(2);//push back add element in the end of vector and emplace_back is also work like push_back 
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.pop_back();
    // vec.erase(vec.begin()+1); // erase value at any index and erase reduce size but capacity remain same
    // vec.erase(vec.begin()+1, vec.begin()+2);
    // vec.insert(vec.begin()+2,100);
    // vec.clear(); //size will be zero capacity remain same
    // vec.empty()
    // vec.begin = vec[1], vec.end = vec[last + 1]

    for(int val : vec) {
        cout << val << " " << endl;
    }

    // cout << vec.size() << endl; // it shows number of elements in vector and it work like 1st create array then fill element
    // cout << vec.capacity() << endl; // capacity work like it change double means in 1st is space 2 then next time it will be 4
//     cout << "Val at index 2 is: " << vec[2] << " or: " << vec.at(2)<<endl; // from it we can access any index element
//     cout << "Front: " << vec. front() << endl;
//     cout << "Back: " << vec.back() << endl;
}