#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define endl '\n'

void bubbleSort(vector<int> &v, int size){
    for(int i = 0; i < size - 1; i++){
        bool swapped = false;
        for(int j = 0; j < size - 1 - i; j++){
            if(v[j] > v[j + 1]){ //Ascending Order Bubble Sort
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    bubbleSort(v, n);

    for(auto val : v)
        cout << val << " ";

    cout << endl;

    return 0;
}