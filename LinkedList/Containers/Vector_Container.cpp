#include<bits/stdc++.h>
using namespace std;

int ExampleVector(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.emplace_back(4); // faster than push_back

    // for(int i : v){
    //     cout << i << " ";
    // }

    vector<int> :: iterator it = v.begin();
    // it++;
    cout << *it << " ";
}

int main() {
    ExampleVector();
    return 0;
}
