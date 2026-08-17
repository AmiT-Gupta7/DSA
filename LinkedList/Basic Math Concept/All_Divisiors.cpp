#include<bits/stdc++.h>
using namespace std;

void divisors(int n){
    for(int i = 1; i <= n; i++){ // Time Complexity : O(n)
        if(n % i == 0){
            cout << i << " ";
        }
    }
}

// optmized approach

void printDivisors(int n){
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << i << " ";
            if(i != n / i){
                cout << n / i << " ";
            }
        }
    }
}

void printDivisors2(int n){ // Output is Sorted...
    vector<int> ls;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ls.push_back(i);
            if(i != n / i){
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
}
int main(){
    int n;
    cout << "Enter a Number:";
    cin >> n;
    printDivisors2(n);
}