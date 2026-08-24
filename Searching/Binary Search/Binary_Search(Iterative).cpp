#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int BinarySearch(vector<int> &v, int left, int right, int target){

    if(left > right) return -1;
    
    int mid;
    while(left <= right){

        mid= left + (right - left) / 2;

        if(v[mid] == target) return mid;
        else if(v[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    
    return -1;
}

int main(){
    vector<int> v = {10, 20, 30, 40, 50, 60, 70};
    int size = v.size();
    
    int target = 40;

    int idx = BinarySearch(v, 0, size - 1, target);

    idx == -1 ? cout << "Element not found\n" : cout << "Element found at index: " << idx << endl;

    return 0;
}