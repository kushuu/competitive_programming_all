/****************************************************************
Author: kushuu   File: A.cpp    Date: Sun Apr 11 2021
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
        ll n, k, ans = 0; cin >> n >> k;
        ll arr[n]; fo(i, 0, n) cin >> arr[i];
        unordered_map<ll,ll> check; for(auto i : arr) check[i]++;
        for(auto i : check) if(i.S == k) ans += i.first;
        if(ans) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}