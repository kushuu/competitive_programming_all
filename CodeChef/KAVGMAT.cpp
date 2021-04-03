/****************************************************************
Author: kushuu   File: KAVGMAT.cpp    Date: Fri Apr 02 2021
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
        ll n, m, k, ans = 0;
        cin >> n >> m >> k;
        vector<vector<ll>> mat(n , vector<ll> (m, 0));
        fo(i, 0, n) fo(j, 0, m) {
            cin >> mat[i][j];
            if(mat[i][j] >= k) ans++;
        }
        if(!ans) {
            cout << 0 << endl;
            continue;
        }

        vector<vector<ll>> pref(n , vector<ll> (m, 0));
        pref[0][0] = mat[0][0];
        for (int i = 1; i < m; i++) pref[0][i] = pref[0][i - 1] + mat[0][i];
        for (int i = 1; i < n; i++) pref[i][0] = pref[i - 1][0] + mat[i][0];
    
        for (int i = 1; i < n; i++) for (int j = 1; j < m; j++) pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + mat[i][j];
        
        // for(auto i : pref) {
        //     for(auto j : i) cout << j << " " ; cout << endl;
        // }

        fo(order, 2, min(n,m)+1) {
            fo(i, order-1, n) {
                fo(j, order-1, m) {
                    ll temp = pref[i][j];
                    if(i-order>=0) temp -= pref[i-order][j];
                    if(j-order>=0) temp -= pref[i][j-order];
                    if(j-order>=0 and i-order>=0) temp += pref[i-order][j-order];
                    // cout << order << " " << i << " " << j << " " << temp << endl;
                    if(temp >= k*order*order) ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}