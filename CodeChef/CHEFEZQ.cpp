/**********************************************
Author: kushuu   File: CHEFEZQ.cpp    Date: Fri Oct 02 2020
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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        fo(i, n) cin >> arr[i];
        
        ll ans = -1;
        fo(i, n) {
            if(arr[i] <  k) {
                ans = i+1;
                break;
            }
            else
                arr[i+1] += arr[i] - k;
        }
        //for(auto i : arr) cout << i << " " ; cout << endl;
        if(ans == -1)
            cout << "uh\n";
        else
            cout << ans << endl;
    }
    return 0;
}