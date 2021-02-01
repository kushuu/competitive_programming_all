#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

ll sum_(ll sweets[], ll start, ll end) 
{
    bool flag = true;
    ll ans = 0;
    ll multiplier = 1;
    for(ll i = start; i <= end; i++) {
        if(flag) {
            ans += sweets[i]*multiplier;
            flag = false;
        }
        else {
            ans -= sweets[i]*multiplier;
            flag = true;
        }
        multiplier++;
    }
    return ans;
}

int main() {
    fastIO;
    ll T; cin >> T;
    for(ll test = 1; test <= T; test++) {
        ll total_sum = 0;
        ll N, Q;    cin >> N >> Q;
        ll sweets[N];
        for(ll i = 0; i < N; i++)   cin >> sweets[i];   
        for(ll i = 0; i < Q; i++) {
            char query;
            ll start, end;
            cin >> query >> start >> end;
            if(query == 'Q') {
                total_sum += sum_(sweets, start-1, end-1);
            }
            else {
                sweets[start - 1] = end;
            }
        }
        cout << "Case #" << test << ": " << total_sum << endl;
    }
    return 0;
}