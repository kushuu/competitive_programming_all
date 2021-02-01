/**********************************************
Author: kushuu   File: GCDOPS.cpp    Date: Sat Sep 26 2020
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
        ll n; cin >> n;
        unordered_map<ll, ll> keeper;
        ll b[n]; 
        fo(i, n) {
            cin >> b[i];
            keeper[b[i]]++;
        }
        //for(auto x : keeper) cout << x.first << " " << x.second << endl;
        bool poss = true;
        for(ll i = 0; i < n; i++) {
            if(b[i] == 1) continue; // :D
            if(b[i] == i+1 || ((i+1) % b[i] == 0)) continue;
            else {poss = false; break;}
        }
        if(poss) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}