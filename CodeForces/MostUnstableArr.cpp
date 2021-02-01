/**********************************************
Author: kushuu   File: MostUnstableArr.cpp    Date: Tue Aug 25 2020
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
        /*
        ll n, m; cin >> n >> m;
        ll cntMC = n-3, cntRem = 2;
        ll mostComm = m/(n/2);
        ll rem = m - mostComm*(n/2 - 1);
        
        cout << mostComm << " " << rem << " " << cntMC << " " << cntRem << endl ;
        cout << mostComm*cntMC + rem*cntRem << endl;
        */
        ll n, m; cin >> n >> m;
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        if(n == 2) {
            cout << m << endl;
            continue;
        }
        cout << 2*m << endl;
    }
    return 0;
}