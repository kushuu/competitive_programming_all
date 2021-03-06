/****************************************************************
Author: kushuu   File: BOLT.cpp    Date: Fri Apr 02 2021
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
        cout << setprecision(3);
        double k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        double time = 100.0;
        time /= k1;
        time /= k2;
        time /= k3;
        time /= v;
        time = floor(time*100 + 0.5)/100;
        if(time < 9.58) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}