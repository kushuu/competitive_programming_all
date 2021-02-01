#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll n; cin >> n;
        ll a[n]; for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<ll>());
        ll ans = 0;
        ll m = n;
        for(ll i = 0; i < n; i++) {
            cout << "m rn " << m << " " << a[i] << " " << i;
            if(a[i] <= m) {
                ans++;
                i += a[i]-1;
                m -= a[i];
            }
            cout  << " " << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}