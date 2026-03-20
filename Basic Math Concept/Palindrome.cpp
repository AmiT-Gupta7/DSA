#include<bits/stdc++.h>
using namespace std;

void Palindrom(int n){
    int dupl = n;
    int rev = 0;
    while(n > 0){
        int digit = n % 10;
        rev = rev*10 + digit;
        n = n / 10;
    }

    if(rev == dupl) cout << "Palindrome";
    else cout << "NOT Palindrome";
}

// optimized approach

bool isPalindrome(int n){
    if(n < 0){
        return false;
    }
    long dupl = n;
    long rev = 0;
    while(n != 0){
        rev = rev*10 + (n % 10);
        n = n / 10;
    }
    return dupl == rev;
}

int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << isPalindrome(n) << endl;
    return 0;
}