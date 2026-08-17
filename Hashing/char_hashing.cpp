#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[13];
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        hash[arr[i]]+=1;    
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;

        cout << num << "-->" << hash[num] << endl;
    }
    return 0;
}