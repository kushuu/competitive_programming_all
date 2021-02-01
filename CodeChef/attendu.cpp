/****************************************************************
Author: kushuu   File: attendu.cpp    Date: Tue Dec 22 2020
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
        string s; cin >> s;
        ll rem = 120-n;
        ll attended = 0;
        for(auto i : s) attended += (i-'0');
        // cout << "here\n";
        if(rem+attended < 90) cout << "NO\n";
        else cout << "YES\n"; 
    }
    return 0;
}