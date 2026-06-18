#include <bits/stdc++.h>
using namespace std;
// Queue = First come First serve
//queue<int> q; syntax
// function of queue push, emplace,front,pop,size,empty,swap
// int main() {
//     queue<int> q;

//     q.push (1) ;
//     q. push(2) ;
//     q.push (3);

//     while(!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
//     return 0;
// }
int main() {
    priority_queue<int> q; // sort the queue

    q.push (10) ;
    q. push(2) ;
    q.push (31);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}