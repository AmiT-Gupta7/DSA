#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int dupl = n;
    int rev = 0;
    while(n != 0){
        int d = n % 10;
        rev = rev + (d*d*d);
        n = n / 10;
    }
    return rev; 
}

int main(){
    int n;
    cout << "Enter a Number:";
    cin >> n;
    cout << armstrong(n) << endl;
    return 0;
}