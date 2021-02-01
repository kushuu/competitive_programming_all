#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

pair<ll, ll> minMax(ll number) {
    ll dig;
    ll min = LLONG_MAX, max = LLONG_MIN;
    while(number) {
        dig = number%10;
        if(dig > max)   max = dig;
        if(dig < min)   min = dig;
        number /= 10;
    }
    //cout << "min: " << min << " max: " << max << endl;
    return make_pair(min, max);
}

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll a, K;
        cin >> a >> K;
        ll ans = a;
        
        for(ll i = 1; i < K; i++) {
            pair<ll,ll> values = minMax(ans);
            ll minA = values.first, maxA = values.second;
            if(minA == 0)   break;
            ans += minA*maxA;
            //cout << ans << " ";
        }

        cout << ans << endl;
    }
    return 0;
}