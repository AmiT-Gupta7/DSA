#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     int n = 4;
//     vector<int> dp(n+1);
//     dp[o] = 0;
//     dp[1] = 1;
//     for(int i = 2; i < n; i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     return 0;
// }

int main(){
    int n = 5;
    int prev2 = 0;
    int prev = 1;
    for(int i = 2; i <= n; i++){
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    cout << prev;
    return 0;
}