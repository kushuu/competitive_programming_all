/****************************************************************
Author: kushuu   File: kadanes.cpp    Date: Sat Mar 20 2021
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
    ll n; cin >> n;
    vll check(n); fo(i,0,n) cin >> check[i];
    
    ll ans = check[0];
    vll dp(n); dp[0] = check[0];
    fo(i,1,n) {
        dp[i] = max(dp[i-1],0LL) + check[i];
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}