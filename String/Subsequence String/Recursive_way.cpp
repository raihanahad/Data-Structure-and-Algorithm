#include <iostream>
#include <string>
using namespace std;

bool isSubSeqRec(string& s1, string& s2, int m, int n){
    
    if(m == 0 || n == 0)
        return true;

    if(s1[m - 1] == s2[n - 1])
        return isSubSeqRec(s1, s2, m - 1, n - 1);

    return isSubSeqRec(s1, s2, m, n - 1);
}

bool isSubSeq(string& s1, string& s2){
    int m = s1.length();
    int n = s2.length();
    if (m > n) return false;
    return isSubSeqRec(s1, s2, m, n);
}

int main(){
    cout << "Write a string to check subsequence of main string: \n";
    string s1; cin >> s1;
    cout <<"Write the main string:\n";
    string s2; cin >> s2;

    isSubSeq(s1, s2) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}