#include<bits/stdc++.h>
using namespace std;

// int sum(int num1, int num2){
//     return num1 + num2;
// }

// int main(){
//     int a, b;
//     cout << "Enter value of a:", cin >> a, cout << "and b:",cin >> b;
//     cout << "The sum is: " << sum(a, b); // function call
// }

//// Pass by value...................

// void dosomething(int num){
//     cout << num << endl;
//     num += 10;
//     cout << num << endl;
//     num += 20;
//     cout << num << endl;
// }

// int main(){
//     int num = 5;
//     dosomething(num);
//     cout << "In main function: " << num << endl;
// }

//// Pass by reference...................

void dosomething(int &num){ // num is reference variable, the address of num is passed
    cout << num << endl;
    num += 10;
    cout << num << endl;
    num += 20;
    cout << num << endl;
}

int main(){
    int num = 5;
    dosomething(num);
    cout << "In main function: " << num << endl;
}