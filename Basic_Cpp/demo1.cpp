#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			cout << "1";
		}
		cout << endl;
	}
}

int main() {
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int n;
        cin >> n;
        printPattern(n);
    }
}