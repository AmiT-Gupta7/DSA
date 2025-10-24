#include<iostream>
using namespace std;

void printpattern(int n){
	for(int i = 1; i <= n; i++){
		for(int j = n; j >= 1; j--){
			cout << j;
		}
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	printpattern(n);
}


