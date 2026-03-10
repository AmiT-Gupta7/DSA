#include<iostream>
using namespace std;

void PrintName(int i,int n){
    if(i > n){
        return;
    }
    cout << "Amit" << endl;
    PrintName(i+1,n);
}

void PrintInteger(int i,int n){
    if(i > n){
        return;
    }
    cout << i << endl;
    PrintInteger(i+1,n);
}

void PrintInteger2(int n){ // reverse order
    if(n < 1){
        return;
    }
    cout << n << endl;
    PrintInteger2(n-1);
}
int main(){
    int n;
    cin >> n;
    PrintInteger2(n);
}