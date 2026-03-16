#include<bits/stdc++.h>
using namespace std;

void exampleList(){
    list<int> ls;

    ls.push_back(1);
    ls.push_back(2);
    ls.emplace_back(3); // faster than push_back

    ls.push_front(0);

    for(list<int> :: iterator it = ls.begin(); it != ls.end(); it++){
        cout << *it << " ";
    }
}

int main() {
    exampleList();
    return 0;
}
