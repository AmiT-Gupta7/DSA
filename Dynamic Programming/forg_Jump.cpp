#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// for +1,+2 jumps
int f(int ind, vector<int> &arr, vector<int> &dp){
    if(ind == 0) return 0;

    if(dp[ind] != -1) return dp[ind];

    int fs = f(ind-1, arr, dp) + abs(arr[ind] - arr[ind-1]);
    int ss = INT_MAX;
    if(ind > 1) ss = f(ind-2, arr, dp) + abs(arr[ind] - arr[ind-2]);
    return dp[ind] = min(fs, ss);
    
}

// for K jumps
int f1(int ind, vector<int> &arr, int k, vector<int> &dpArr){
    if(ind == 0) return 0;

    if(dpArr[ind] != -1) return dpArr[ind];

    int minstep = INT_MAX;
    for(int j = 1; j <= k; j++){
        if(ind-j >= 0){
            int jump = f1(ind-j, arr, k, dpArr) + abs(arr[ind] - arr[ind-j]);
            minstep = min(minstep, jump);
        } 
    }
    return dpArr[ind] = minstep; 
}

int main(){
    int n = 5;
    int k = 3;
    vector<int> arr = {10, 30, 40, 20, 50};
    vector<int> dp(n+1, -1);
    // cout << f(n-1, arr, dp) << '\n'; //for +1,+2 jump
    cout << f1(n-1, arr, k, dp); //for k jumps
    return 0;
}

