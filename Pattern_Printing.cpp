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
// Pattern No. 17
void print17(int n){
    // Space
    for(int i = 0;i < n; i++){ 
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }
        // Character
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j <= 2*i+1;j ++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        //Space
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
// Pattern No. 18
void print18(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }

        int num = 1;
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j <= 2*i+1;j++){
            cout << num;
            if(j <= breakpoint) num++;
            else num--;
        }
        
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
// Pattern No. 19
void print19(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A'+i-1;
		for(int j = 1; j <= i; j++){
			cout << ch;
            ch++;
		}
		cout << endl;
	}
}
// Pattern No. 20
void print20(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j >= 1; j--){
            cout << j;
        }
        for(int j = 2; j <= n; j++){
            cout << j;
        }
        cout << endl;
    }
}
// pattern No. 21
void print21(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'E'-(i-1);
		for(int j = 1; j <= i; j++){
			cout << ch;
            ch++;
		}
		cout << endl;
	}
}
// Pattern No. 22
void print22(int n){
    int Space = 0;
    for(int i = 0; i < n; i++){
        // Stars
        for(int j = 1; j <= n-i; j++){
            cout << "*";
        }
        // Space
        for(int j = 1; j <= Space; j++){
            cout << " ";
        }
        // Stars
        for(int j = 1; j <= n-i; j++){
            cout << "*";
        }
        Space += 2;
        cout << endl;
    }
    Space = 2*n-2;
    for(int i = 1; i < n; i++){
        // Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // Space
        for(int j = 1; j <= Space; j++){
            cout << " ";
        }
        // Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        Space -= 2;
        cout << endl;
    }
}
// Pattern No. 23
void print23(int n){
    int inspace = 2*n - 2;
    for(int i = 1; i <= 2*n-1; i++){
        int star = i;
        if(i > n) star = 2*n - i;
        // Stars
        for(int j = 1; j <= star; j++){
            cout << "*";
        }
        // Space
        for(int j =1; j <= inspace; j++){
            cout << " ";
        }
        // Stars
        for(int j = 1; j <= star; j++){
            cout << "*";
        }
        cout << endl;
        if(i < n) inspace -= 2;
        else inspace += 2;
    }
}
void print24(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}



int main(){
    int n;
    cout << "Enter num:", cin >> n;
    print7(n);
}