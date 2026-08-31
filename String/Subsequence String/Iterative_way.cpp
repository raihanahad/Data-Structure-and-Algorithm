#include <iostream>
using namespace std;


bool isSubSeq(string& s1, string& s2){
    
    int m = s1.length(), n = s2.length();
  
    if(m > n) return false;
  
    int i = 0, j = 0;
    while(i < m && j < n){
        if (s1[i] == s2[j])
            i++;
        j++;
    }
  
    return true;
}

int main(){
    cout << "Write a string to check subsequence of main string: \n";
    string s1; cin >> s1;
    cout <<"Write the main string:\n";
    string s2; cin >> s2;

    isSubSeq(s1, s2) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}