#include<iostream>
using namespace std;

void swapArray(int i, int arr[], int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    swapArray(i+1, arr, n);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    swapArray(0, arr, n);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}