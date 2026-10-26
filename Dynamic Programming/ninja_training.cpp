#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int maxiNinjaTrainingPoint(int days, int last, vector<vector<int>>& points, vector<vector<int>>& dpArr){
    if(days == 0){
        int maxi = 0;
        for(int task = 0; task < 3; task++){
            if(task != last){
                maxi = max(maxi, points[0][task]);
            }
        }
        return maxi;
    }
    if(dpArr[days][last] != -1) return dpArr[days][last];

    int maxi = 0;
    for(int task = 0; task < 3; task++){
        if(task != last){
            int point = points[days][task] + maxiNinjaTrainingPoint(days-1, task, points, dpArr);
            maxi = max(maxi, point);
        }
    }
    return dpArr[days][last] = maxi;
}

int main(){
    vector<vector<int>> points = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
        int n = 4;
    vector<vector<int>> dpArr(n, vector<int>(4, -1));
    cout << maxiNinjaTrainingPoint(n-1, 3, points, dpArr) << endl;
    return 0;
}