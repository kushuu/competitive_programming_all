/****************************************************************
Author: kushuu   File: D.cpp    Date: Sun Apr 11 2021
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
        ll amt, ans = 0; cin >> amt;
        vll arr = {100, 50, 10, 5, 2, 1};
        for(auto i : arr) {
            if(amt >= i) ans += amt/i;
            ll rem = amt%i;
            amt /= i;
            amt = rem;
        }
        cout << ans << endl;
    }
    return 0;
}