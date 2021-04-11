/****************************************************************
Author: kushuu   File: F.cpp    Date: Sun Apr 11 2021
****************************************************************/

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
#define fo(i,x,y) for(long long i = x; i < y; i++)
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
        ll n; cin >> n;
        bool yep = false;
        vll arr(n); fo(i, 0, n) {
            cin >> arr[i];
            if(arr[i]) yep = true;
        }
        if(!yep) {
            cout << 0 << endl;
            continue;
        }
        string ans = "";
        for(auto i : arr) ans += to_string(i);
        stable_sort(ans.rbegin(), ans.rend());
        // stable_sort(arr.rbegin(), arr.rend());
        cout << ans << endl;
        // for(auto i : arr) cout << i; cout << endl;
    }
    return 0;
}