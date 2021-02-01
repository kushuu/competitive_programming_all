#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll n, maxi = LLONG_MIN; cin >> n;
        ll a[n];
        map<ll, ll> keeper;
        bool ok = true;
        vll up, down;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            maxi = max(maxi, a[i]);
            keeper[a[i]]++;
            if(keeper[a[i]] == 1) up.pb(a[i]);
            if(keeper[a[i]] > 2)
                ok = false;
            if(keeper[a[i]] == 2) down.pb(a[i]);
        }
        if(keeper[maxi] > 1) ok = false;
        if(!ok) {
            cout << "NO" << endl;
            continue;
        }
        sort(up.begin(), up.end());
        sort(down.rbegin(), down.rend());
        if(ok) {
            cout << "YES\n";
            for(auto x : up) cout << x << " ";
            for(auto x : down) cout << x << " "; cout << endl;
        }
        else cout << "NO\n";
    }
    return 0;
}