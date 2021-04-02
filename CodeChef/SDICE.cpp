/****************************************************************
Author: kushuu   File: SDICE.cpp    Date: Fri Apr 02 2021
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
        map<int, ll> magik;
        magik[1] = 20;
        magik[2] = 36;
        magik[3] = 51;
        magik[4] = 60;
        magik[5] = 76;
        magik[6] = 88;
        magik[7] = 99;
        magik[8] = 104;
        
        if(n <= 8) cout << magik[n] << endl;
        else {
            // cout << n << " " << n/4 << " " << n%4 << "  " ;
            cout << (n/4-1)*44 + (4-n%4)*15 + (n%4)*11 + magik[n%4] << endl;

        }

    }
    return 0;
}