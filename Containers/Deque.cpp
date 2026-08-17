#include<bits/stdc++.h>
using namespace std;

void exampleDeque(){
    deque<int> dq;

    dq.push_back(11);
    dq.push_back(22);
    dq.emplace_back(33); // faster than push_back
    dq.push_front(0);

    for(deque<int> :: iterator it = dq.begin(); it != dq.end(); it++){
        cout << *it << " ";
    }

    dq.back() = 4; // change the last element of the deque
    cout << endl;
}

int main() {
    exampleDeque();
    return 0;
}