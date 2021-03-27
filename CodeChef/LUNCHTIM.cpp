/****************************************************************
Author: kushuu   File: LUNCHTIM.cpp    Date: Sat Mar 27 2021
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
        vll check(n); fo(i, 0, n) cin >> check[i];
        vll pre(n), post(n), ans(n);
        fo(i, 0, n) {
            ll start = i-1, end = i+1;
            while(start >= 0) {
                if(check[start--] == check[i]) ans[i]++;
                else break;
            }
            while(end < n) {
                if(check[end++] == check[i]) ans[i]++;
                else break;
            }
        }
        for(auto i : ans) cout << i << " " ; cout << endl;
    }
    return 0;
}