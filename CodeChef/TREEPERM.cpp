/****************************************************************
Author: kushuu   File: TREEPERM.cpp    Date: Sun Apr 04 2021
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
        ll n, s; cin >> n >> s;
        vector<vector<ll>> check(n+1);   // defining a tree as an undirected graph
        ll idx = 0;
        while(idx++ < n-1) {
            ll u, v; cin >> u >> v;
            check[u].pb(v);
            check[v].pb(u);
        }
        vll a(n); fo(i,0,n) cin >> a[i];
        vll b(n); fo(i,0,n) cin >> b[i];

        fo(i, 0, n) {
            cout << i << ": ";
            for(auto j : check[i]) cout << j << " " ;
            cout << endl;
        }
        // phew inputting done.
        
    }
    return 0;
}