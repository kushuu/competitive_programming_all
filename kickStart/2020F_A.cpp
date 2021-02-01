/**********************************************
Author: kushuu   File: 2020F_A.cpp    Date: Sun Sep 27 2020
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
    for(int test = 1; test <= t; test++) {
        ll n, k, ele; cin >> n >> k;
        vpll pos;
        ll arr[n]; fo(i,n) {
            cin >> ele;
            pos.pb({ele/k, i+1});
        }
        //for(auto i : pos) cout << i.F << " ";
        cout << "Case #" << test << ": " ;
        /*while(pos.size()) {
            for(ll i = 0; i < pos.size(); i++) {
                if(pos[i].F <= k) {
                    cout << pos[i].S << " " ;
                    pos.erase(pos.begin() + i);
                }
                else {
                    pos[i].F -= k;
                    pos.pb({pos[i].F, pos[i].S});
                    pos.erase(pos.begin() + i);
                }
            }
        }*/
        sort(pos.begin(), pos.end());
        //for(auto i : pos) cout << i.F << " ";
        //cout << endl;
        for(auto i : pos) cout << i.S << " ";
        cout << endl;

    }
    return 0;
}