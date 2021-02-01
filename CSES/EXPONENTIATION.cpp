/**********************************************
Author: kushuu   File: EXPONENTIATION.cpp    Date: Thu Oct 01 2020
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

ll val(ll a, ll b)
{
    if(!b) return 1;
    if(!a) return 0;
    ll ans = 1;
    while(b) {
        if(b&1)
            ans = (ans*a)%MOD;
        
        b >>= 1;
        a = (a*a)%MOD;
    }
    return ans;
}

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;

        cout << val(a, b) << endl;
    }
    return 0;
}