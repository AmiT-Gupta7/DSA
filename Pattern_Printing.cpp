#include<bits/stdc++.h>
using namespace std;
// Pattern No. 1
void print1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << " * ";
        }
        cout << endl;
    }
}
// Pattern No. 2
void print2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Pattern No. 3
void print3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
// Pattern No. 4
void print4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
// Pattern No. 5
void print5(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Pattern No. 6
void print6(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
// Pattern No. 7
void print7(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
// Pattern No. 8
void print8(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*n - (2*i+1); j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
// Pattern No. 10
void print10(int n){
    for(int i = 1; i <= 2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n -i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
// Pattern No. 11
void print11(int n){
    int start = 1;
    for(int i = 0; i < n; i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;

    }
}
// Pattern No. 12
void print12(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 1; j <=2*n-(i*2); j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;

    }
}
// Pattern No. 13
void print13(int n){
    int num = 1;
    for(int i =1; i <= n; i++){
        for(int j =1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
        
    }
}
// Pattern No. 14
void print14(int n){
    for(int i =1; i <= n; i++){
        for(char ch = 'A'; ch < 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
        
    }
}
// Pattern No. 15
void print15(int n){
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + (n-i-1); ch++){
            cout << ch << " ";
        }
        cout << endl;
        
    }
}
// Pattern No. 16
void print16(int n){
    char start = 'A';
    for(int i =1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << start << " ";
        }
        cout << endl;
        start ++;
        
    }
}
int main(){
    int n;
    cout << "Enter num:", cin >> n;
    print16(n);
}