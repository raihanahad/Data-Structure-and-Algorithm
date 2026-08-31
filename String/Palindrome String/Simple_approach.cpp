#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){

    int len = s.length();

    for(int i = 0; i < len / 2; i++){
        if (s[i] != s[len - i - 1])            // Return false (not a palindrome)
            return false;
    }

    return true;
}

int main() {
    string s;
    cin >> s;

    cout << boolalpha << isPalindrome(s) << endl;

    return 0;
}