#include<bits/stdc++.h>
using namespace std;

void examplePQ(){
    priority_queue<int> pq;

    pq.push(11); // {11}
    pq.push(5); // {11, 5}
    pq.push(8); // {11, 5, 8} -> {11, 8, 5}
    pq.push(1); // {11, 8, 5, 1} -> {11, 8, 5, 1}

    cout << pq.top() << endl; // 11
}

int main() {
    examplePQ();
    return 0;
}