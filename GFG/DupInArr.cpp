#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

vector<int> duplicates(int a[], int n) {
    vector<int> vec;
    for(int i = 0; i < n; i++) vec.push_back(a[i]);

    for(auto i: vec) cout << i << " ";
    cout << endl;

    set<int> nums(vec.begin(), vec.end());
    vector<int> v(nums.begin(), nums.end());

    for(auto i: v) cout << i << " ";
    cout << endl;

    if(v.size() == 0) {
        vector<int> v = {-1};
        return v;
    }
    else
        return v;
    
}