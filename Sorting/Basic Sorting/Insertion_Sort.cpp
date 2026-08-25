#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define endl '\n'

void insertionSort(vector<int> &v, int size){
    for(int i = 1; i < size; i++){
        int key = v[i];
        int j = i - 1;

        // For ascending order, move the larger element to the right.
        while(j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    insertionSort(v, n);

    for(auto val : v)
        cout << val << " ";

    cout << endl;

    return 0;
}