#include<iostream>
using namespace std;

void PrintSum(int i, int sum){  // Parameterized Recursion Function
    if(i < 1){
        cout << sum;
        return;
    }
    PrintSum(i-1, sum+i);
}

int main(){
    int n;
    cin >> n;
    PrintSum(n,0);
}