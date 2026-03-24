#include<iostream>
using namespace std;

bool strPalindrome(int i, string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size()-i-1]){
        return false;
    }
    return strPalindrome(i+1, s);
}

// bool isPalindrome(string s){
//     string newstr = "";
//     for(int i = 0; i < s.size(); i++){
//         if(isalpha(s[i])){
//             newstr.push_back(tolower(s[i]));
//         }
//     }
//     string reveseStr = newstr;

//     reverse(reveseStr.begin(), reveseStr.end());

//     return reveseStr == newstr;
// }
bool isPalindrome2(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        if (!isalpha(s[left])) {
            left++;
        } else if (!isalpha(s[right])) {
            right--;
        } else {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
    }
    return true;
}

int main(){
    string s = "";
    cout << "Enter String:";
    cin >> s;
    // cout << strPalindrome(0, s);
    // return 0;
    cout << isPalindrome2(s);
}