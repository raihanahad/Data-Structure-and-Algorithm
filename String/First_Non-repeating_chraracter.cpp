#include <bits/stdc++.h>
using namespace std;

char nonRep(const string &s) {
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    for (char c : s) {
        if (freq[c - 'a'] == 1) {
            return c;
        }
    }
    return '-';
}

int main() {
    string s;
    cin >> s;
    
    cout << nonRep(s) << endl;
    return 0;
}