/**********************************************
Author: kushuu   File: GSUB.cpp    Date: Thu Nov 05 2020
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
#define here std::cout << "here\n";
//
using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll n, q; cin >> n >> q;
        ll arr[n]; fo(i, n) cin >> arr[i];
        ll iniPos = 0, len = 1, check = arr[0];
        for(ll i = 1; i < n; i++) {
            if(arr[i] != check)
                len++;
            else {
                check = arr[i];
                iniPos = i;
                len = 1;
            }
        }
        // cout << len << " " << iniPos << " " << len-iniPos+1 << endl ;
        
        while(q--) {
            ll x, y; cin >> x >> y;
            x--;
            arr[x] = y;
            if(x == iniPos-1 || x == (len-iniPos+1)+1) {
                if(y != arr[iniPos] && y != arr[len-iniPos]) {
                    cout << ++len << endl;
                    // here;
                    continue;
                }
            }
            if(arr[x-1] == y || arr[x+1] == y) { 
                cout << max(len-x, x) << endl;
                // cout << "xx" << endl;
            }
            else
                cout << len << endl;
            for(auto i : arr) cout << i << " " ; cout << endl;
        }
    }
    return 0;
}