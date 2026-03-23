#include<iostream>
using namespace std;

bool strPalindrome(int i, string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size()-i-1]){
        return false;
    }
    return strPalindrome(i+1, s);
}


int main(){
    string s = "";
    cout << "Enter String:";
    cin >> s;
    cout << strPalindrome(0, s);
    return 0;
}