#include<iostream>
using namespace std;

void PrintInteger1(int n){  // 1 2 3 4 5 ...
    if(n < 1){
        return;
    }
    PrintInteger1(n-1);
    cout << n << endl;
}

void PrintInteger2(int i, int n){  // 5 4 3 2 1 ...
    if(i > n){
        return;
    }
    PrintInteger2(i+1,n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    PrintInteger2(1,n);
}