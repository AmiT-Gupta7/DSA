#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n > 0){
        n = n / 10;
        count++;
    }
    return count;

    int cnt = int(log10(n)) + 1; // This is a more efficient way to count digits
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}