#include<iostream>
using namespace std;

// int main(){
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     cout << arr[3];

// }

// multi dimensional arrays......

int main(){
    int arr[3][5];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}