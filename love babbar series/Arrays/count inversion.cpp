/**********************************************
Author: kushuu   File: count inersion.cpp    Date: Wed Nov 04 2020
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
        // approach #1 : brute force. complexity : O(n^2). gives TLE for full TC.
        ll n, ans = 0; cin >> n;
        ll arr[n]; fo(i, n) cin >> arr[i];
        for(ll i = 0; i < n-1; i++) {
            for(int j  = i+1; j < n; j++) 
                if(arr[i] > arr[j]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}