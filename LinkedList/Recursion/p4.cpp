#include<iostream>
using namespace std;

int PrintSum(int n){
    if(n == 0){
        return 0;
    }
    return n + PrintSum(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << PrintSum(n);
}