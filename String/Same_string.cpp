#include <iostream>
using namespace std;

bool areStringsEqual(string &s1, string &s2){
  
    if (s1.length() != s2.length()) {
        return false;
    }

    for (size_t i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            return false; 
        }
    }

    return true; 
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (areStringsEqual(s1, s2)) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl;  
    }

    return 0;
}