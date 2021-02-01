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
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll n, x; cin >> n >> x;
        ll ans = 0;
        ll countries[n]; for(ll i = 0; i < n; i++) cin >> countries[i];
        ll temp = countries[0];
        while(temp > 0) {
            ll cured = temp-x;
            //cout << temp << " " << x << " " << cured << endl;
            temp -= x;
            x *= 2;
            if(temp*2 > countries[0])
                temp = countries[0];
            else
                temp *= 2;
            ans++;
        }
        //cout << "second last " << ans << endl;
        ans += n-1;
        cout << ans << endl;
    }
    return 0;
}