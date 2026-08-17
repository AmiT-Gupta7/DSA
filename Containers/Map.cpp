#include<bits/stdc++.h>
using namespace std;

void exampleMap(){
    map<int, int> mpp;

    mpp[1] = 100;
    mpp.insert({2, 200});
    mpp.insert({3, 300});
    mpp.emplace(4, 400);

    // cout << mpp[1] << endl;
    cout << mpp[6] << endl; // output: 0, because 6 is not present in the map, it will be inserted with default value 0

    auto it = mpp.find(3);
    cout << it->second;
}

int main() {
    exampleMap();
    return 0;
}