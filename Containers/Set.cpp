#include<bits/stdc++.h>
using namespace std;

void exampleSet(){
    set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(2); // Duplicate, will not be added

    auto it = st.find(2);

    int count = st.count(6); // Count of 6 in the set, will be 0
    cout << "Count of 1: " << count << endl;

    for(auto it : st){
        cout << it << " ";
    }
}

int main() {
    exampleSet();
    return 0;
}