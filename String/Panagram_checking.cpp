#include <bits/stdc++.h>
using namespace std;

bool checkPangram(string &s) {

    vector<bool> vis(26, false);

    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if ('a' <= c && c <= 'z')
            vis[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!vis[i])
            return false;
    }

    return true;
}

int main() {

    string s = "The quick brown fox jumps over the lazy dog";

    // if (checkPangram(s))
    //     cout << "true";
    // else
    //     cout << "false";
    checkPangram(s) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}