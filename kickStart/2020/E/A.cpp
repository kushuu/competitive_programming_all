/**********************************************
Author: kushuu   File: 2020E_A.cpp    Date: Sun Aug 23 2020
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
    fo(i, t) {
        cout << "Case #" << i+1 << ": " ;
        ll n; cin >> n;
        ll arr[n]; fo(i, n) cin >> arr[i];
        vll ans;
        ll cnt = 0;
        ll dif = arr[1] - arr[0];
        for(ll i = 1; i < n; i++) {
            if(arr[i] - arr[i-1] == dif)
                cnt++;
            else {
                cnt = 1;
                dif = arr[i] - arr[i-1];
            }
            ans.push_back(cnt);
        }
        sort(ans.begin(), ans.end(), greater<>());
        cout << ans[0]+1 << endl;
    }
    return 0;
}