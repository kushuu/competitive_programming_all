/**********************************************
Author: kushuu   File: count_k_sum.cpp    Date: Wed Nov 04 2020
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
        ll n, k; cin >> n >> k;
        ll ans = 0;
        ll arr[n]; fo(i, n) cin >> arr[i];
        // approach #1 : brute force. complexity : O(n^2) and space : O(1).
        /*fo(i, n) {
            for(ll j = i+1; j < n; j++) {
                if(arr[i]+arr[j] == k) ans++;
            }
        }
        cout << ans << endl;*/

        // approach #2 : using hash map. complexity : O(n) and space : O(n).
        unordered_map<ll, ll> check;
        fo(i, n) check[arr[i]++];

        fo(i, n) {
            ans += check[k-arr[i]];
            if( k == 2*arr[i]) ans--;
        }
        cout << ans/2 << endl;
    }
    return 0;
}