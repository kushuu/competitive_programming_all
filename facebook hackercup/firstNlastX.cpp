/**********************************************
Author: kushuu   File: firstNlastX.cpp    Time: Mon Jul 20 2020
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
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vll ans;
        ll elements[n]; for(ll i = 0; i < n; i++) cin >> elements[i];
        ll x; cin >> x;
        for(ll i = 0; i < n; i++) {
            if(elements[i] <= x) {
                if(elements[i] == x)
                    ans.pb(i);
            }
            else
                break;
        }
        if(s(ans))
            cout << ans[0] << " " << ans[s(ans)-1] << endl;
        else
            cout << "-1 -1\n";
    }
    return 0;
}