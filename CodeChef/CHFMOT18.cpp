#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll s, n; cin >> s >> n;
        ll ans = 0;
        if(s >= n) {
            ans = s/n;
            ll rem = s % n;
            if(rem == 1)
                ans++;
            else if(rem % 2 == 1)
                ans += 2;
            else if(rem != 0) ans++;
        }
        else {
            if(s == 1 || s % 2 == 0)
                ans = 1;
            else ans = 2;
        }
        cout << ans << endl;
    }
    return 0;
}