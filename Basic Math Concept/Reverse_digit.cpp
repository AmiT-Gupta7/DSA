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

// optimized approach

int reverse(int n){
    int rev = 0;
    while(n != 0){
        rev = rev*10 + (n % 10);
        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }
        n = n / 10;
    }
    return rev;
}

int main(){
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}