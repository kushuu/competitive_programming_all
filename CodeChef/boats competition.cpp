/**********************************************
Author: kushuu   File: boats competition.cpp    Date: Sun Aug 23 2020
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
        ll arr[n]; fo(i, n) cin >> arr[i];
        ll ans = 0;
        map<ll, ll> freq;
        fo(i, n){
            freq[arr[i]]++;
        }

        //easyfo(i, freq) cout << i.F << " " << i.S ; cout << endl;

        for(ll i = 2; i <= 2*n; i++) {
            ll tempTot = 0;
            for(auto x : freq) {
                ll other = i - x.F;
                if(other >= 1 && freq.find(other) != freq.end())
                    tempTot += min(x.S, freq[other]);
            }
            tempTot /= 2;
            ans = max(tempTot, ans);
        }
        cout << ans << endl;
    }
    return 0;
}