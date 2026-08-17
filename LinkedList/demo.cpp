#include<iostream>
using namespace std;

void printpattern(int n){
	for(int i = 0;i < n; i++){ 
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }

        int breakpoint = (2*i+1)/2;
        for(int j = 1; j <= 2*i+1;j ++){
            cout << "*";
            
        //Space
        for(int j = 0; j < n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
}

int main(){
	int n;
	cin >> n;
	printpattern(n);
}


