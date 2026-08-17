#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

int main(){
    vector<int> arr = {2, 3, 5, 6, 7};
    Node* head = new Node(arr[0], nullptr, nullptr);
    cout << head->data;
}