#include <bits/stdc++.h>
using namespace std;

bool isPalindromeCheck(string &s, int left, int right) {

    if(left >= right)
        return true;

    if(s[left] != s[right])
        return false;

    return isPalindromeCheck(s, left + 1, right - 1);
}

bool isPalindrome(string s){
    int left = 0, right = s.length() - 1;
    return isPalindromeCheck(s, left, right);
}

int main(){
    string s;
    cin >> s;

    cout << boolalpha << isPalindrome(s) << endl;

    return 0;
}