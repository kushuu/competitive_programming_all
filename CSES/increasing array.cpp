/**********************************************
Author: kushuu   File: increasing array.cpp    Date: Fri Aug 07 2020
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
    ll n, ans = 0; cin >> n;
    ll arr[n]; fo(i, n) cin >> arr[i];
    for(ll i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            ans += abs(arr[i]-arr[i-1]);
            arr[i] = arr[i-1];
        }
        //fo(i, n) cout << arr[i] << " " ; cout << "\n";
    }
    cout << ans;
    return 0;
}