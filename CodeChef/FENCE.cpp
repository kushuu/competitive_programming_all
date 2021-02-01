/**********************************************
Author: kushuu   File: FENCE.cpp    Date: Mon Oct 12 2020
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
        ll n, m, k; cin >> n >> m >> k;
        set<pair<ll,ll>> check;
        while(k--) {
            ll r, c; cin >> r >> c;
            check.insert({r,c});
        }

        ll ans = 0;
        for(auto i : check) {
            ll temp = 4, x = i.F, y = i.S;
            if(check.find({x, y+1}) != check.end()) temp--;
            if(check.find({x, y-1}) != check.end()) temp--;
            if(check.find({x+1, y}) != check.end()) temp--;
            if(check.find({x-1, y}) != check.end()) temp--;

            ans += temp;
        }
        cout << ans << endl;
    }
    return 0;
}