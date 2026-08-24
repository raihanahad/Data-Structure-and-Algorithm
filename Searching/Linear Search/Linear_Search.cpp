#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int search(vector<int> &v, int size, int target){
    for(int i = 0; i < size; i++){
        if(v[i] == target) return i;
    }
    return -1;
}

int main(){

    int n;
    cin >> n;

    vector<int> v(n);
    for(int &x : v) cin >> x;

    int target; cin >> target;

    int idx = search(v, n, target);

    idx == -1 ? cout << "Element not found\n" : cout << "Element found at index " << idx << endl;

    return 0;
}