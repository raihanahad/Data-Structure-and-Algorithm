#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){
    
    return s == string(s.rbegin(), s.rend());
}

int main(){
    string s;
    cin >> s;
    
    cout << boolalpha << isPalindrome(s) << endl;

    return 0;
}