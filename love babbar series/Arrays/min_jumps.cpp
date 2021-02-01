/**********************************************
Author: kushuu   File: min_jumps.cpp    Date: Tue Nov 03 2020
**********************************************/

#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define ld long double
#define pb push_back
#define mp make_pair
#define vpll vector<pair<long long int, long long int>>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(long long i = 0; i < n; i++)
#define easyfo(x, n) for(auto i : n)
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n, greater<int>());
        int idx = 0, ans = 0;
        bool pos = true;
        while(idx < n-1) {
            int curr = arr[idx];
            if(curr == 0) {pos = false; break;}
            idx += curr;
            ans++;
            cout << curr << " " ; 
        }
        if(pos)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}