#include<iostream>
using namespace std;

int PrintFact(int n){  // factorial of n...
    if(n == 1){
        return 1;
    }
    return n * PrintFact(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << PrintFact(n);
}