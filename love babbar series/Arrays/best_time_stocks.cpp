/**********************************************
Author: kushuu   File: best_time_stocks.cpp    Date: Wed Nov 04 2020
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

ll solve(vll prices) {
    ll size = prices.size();
        if(size <= 1) return 0;
        
        ll ans = 0, tempMin = INT_MAX;
        for(auto i : prices) {
            if(i < tempMin)
                tempMin = i;
            else
                ans = max(ans, i-tempMin);
        }
        return ans;
}
int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vll vec(n);
        cout << solve(vec) << endl;
    }
    return 0;
}