/**********************************************
Author: kushuu   File: move_neg_to_left.cpp    Date: Tue Nov 03 2020
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

        ll lastNeg = 0;
        fo(i, n) {
            if(arr[i] < 0) {
                if(i != lastNeg) swap(arr[i], arr[lastNeg]);
                lastNeg++;
            }
        }
        for(auto i : arr) cout << i << " " ; cout << endl;
    }
    return 0;
}