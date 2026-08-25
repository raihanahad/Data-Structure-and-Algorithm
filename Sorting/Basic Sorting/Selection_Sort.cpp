#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define endl '\n'

void selectionSort(vector<int> &v, int size){
    for(int i = 0; i < size - 1; i++){
        int minIdx = i;

        // Find the smallest element and move it to the left.
        for(int j = i + 1; j < size; j++){
            if(v[j] < v[minIdx])
                minIdx = j;
        }

        if(minIdx != i)
            swap(v[i], v[minIdx]);
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    selectionSort(v, n);

    for(auto val : v)
        cout << val << " ";

    cout << endl;

    return 0;
}