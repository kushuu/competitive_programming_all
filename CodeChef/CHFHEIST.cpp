/****************************************************************
Author: kushuu   File: CHFHEIST.cpp    Date: Sun Jun 06 2021
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
        ll D, d, P, Q, ans = 0;
        cin >> D >> d >> P >> Q;
        ll n = D/d-1, m = D%d;
        // cout << P*D << " " << (Q*d*n*(n+1))/2 << " " << (n+1)*Q*m << " " ;
        ans += P*D + (Q*d*n*(n+1))/2 + (n+1)*Q*m;
        cout << ans << endl;
    }
    return 0;
}