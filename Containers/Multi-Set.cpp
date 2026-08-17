#include<bits/stdc++.h>
using namespace std;

void exampleMultiSet(){
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(5);

    ms.erase(1); // Erases all occurrences of 1

    // ms.erase(ms.find(5)); // Erases one occurrence of 5

    for(int x : ms){
        cout << x << " ";
    }
}

int main() {
    exampleMultiSet();
    return 0;
}