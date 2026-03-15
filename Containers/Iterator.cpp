#include<bits/stdc++.h>
using namespace std;

int ExampleVector(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.emplace_back(4); // faster than push_back

    
    // vector<int> :: iterator it = v.begin(); // iterator pointing to the first element of the vector
    // // it++;
    // cout << *it << " ";

    // vector<int> :: iterator it2 = v.end(); // iterator pointing to the last element of the vector
    // it2--;
    // cout << *it2;

    // using Loops
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}

int main() {
    ExampleVector();
    return 0;
}