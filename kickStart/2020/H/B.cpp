/****************************************************************
Author: kushuu   File: 2020H_B.cpp    Date: Sun Nov 15 2020
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
    fo(i, 0, t) {
        cout << "Case #" << i+1 << ": " ;
        ll L, R; cin >> L >> R;
        // ll numTens = ((R/10)*10 - (L/10)*10 - 10)/10;
        cout << (R-L)/4+(L&1)+(R&1) << endl;
    }
    return 0;
}