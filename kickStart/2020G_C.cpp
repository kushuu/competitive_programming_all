/**********************************************
Author: kushuu   File: 2020G_C.cpp    Date: Sun Oct 18 2020
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
    fo(test, t) {
        ll N, K; cin >> N >> K;
        ll arr[N], ans = LLONG_MAX; 
        fo(i, N) cin >> arr[i];
        unordered_map<ll, ll> check;
        for(ll i = 1; i <= K; i++) {
            for(auto x : arr) {
                check[i] += min(abs(x - i), min(abs(x + K - i), abs(K - x + i)));
            }
            ans = min(ans, check[i]);
        }
        cout << "Case #" << test+1 << ": " << ans << endl; 
    }
    return 0;
}