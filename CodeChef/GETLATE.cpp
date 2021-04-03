/****************************************************************
Author: kushuu   File: GETLATE.cpp    Date: Sat Apr 03 2021
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
        ll steps; 
        double mins; 
        cin >> steps >> mins;
        ll secs = mins*600;
        ll steps2 = secs/15;
        steps -= steps2*2;
        secs -= steps2*15;
        ll steps1 = secs;
        // cout << steps1 << " " << steps2 << " " << secs << " " ;
        if(steps + secs <= 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}