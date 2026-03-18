#include<bits/stdc++.h>
using namespace std;

int RevrseDigit(int n){
    int digit,rev = 0;
    while(n > 0){
        digit = n % 10;
        rev = rev*10 + digit;
        n = n / 10;
    }
    return rev;
}

int main(){
    int n;
    cin >> n;
    cout << RevrseDigit(n) << endl;
    return 0;
}