/****************************************************************
Author: kushuu   File: COLGLF5.cpp    Date: Mon Mar 29 2021
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
        ll n, m, max_time = -1; cin >> n >> m;
        vpll timer;
        fo(i, 0, n) {
            ll ele; cin >> ele;
            timer.pb({ele, 0});
        }
        fo(i, 0, m) {
            ll ele; cin >> ele;
            timer.pb({ele, 1});
        }

        sort(timer.begin(), timer.end());

        ll ans = 0, curr = 0;
        fo(i, 0, n+m) {
            if(timer[i].S != curr) {
                ans++;
                curr = timer[i].S;
            }
        }
        cout << ans << endl;
    }
    return 0;
}