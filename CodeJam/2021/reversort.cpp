/****************************************************************
Author: kushuu   File: A.cpp    Date: Sat Mar 27 2021
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
    fo(test, 1, t+1) {
        cout << "Case #" << test << ": " ;
        ll n; cin >> n;
        vll check(n); fo(i, 0, n) cin >> check[i];
        ll ans = 0;
        fo(i,0, n-1) {
            ll j = min_element(check.begin()+i, check.end()) - check.begin();
            reverse(check.begin()+i, check.begin()+j);
            ans += j - i + 1 ;
            cout << i << " " << j << "\n";
            // for(auto i : check) cout << i << " " ; cout << endl;
        }
        cout << ans << endl;
    }
    return 0;
}