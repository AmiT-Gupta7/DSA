#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){
    int dupl = n;
    int rev = 0;
    while(n != 0){
        int d = n % 10;
        rev = rev + (d*d*d);
        n = n / 10;
    }
    if(dupl == rev){
        cout << "Armstrong...";
    }
    else cout << "NOT Armstrong...";
      
}

int main(){
    int n;
    cout << "Enter a Number:";
    cin >> n;
    armstrong(n);
}