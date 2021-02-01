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
    for(ll test = 1; test <= T; test++) {
        ll count = 0;
        ll N, K;    cin >> N >> K;
        ll arr[N];
        for(ll i = 0; i < N; i++) {
            cin >> arr[i];
        }

        for(ll i = 0; i < N; i++) {
            if(arr[i] == K) {
                ll similar = 0;
                ll pos = i;
                for(ll j = K; j >= 1 && pos < N; j--, pos++) {
                    if(arr[pos] == j) {
                        similar++;
                    }
                    else    break;
                }
                if(similar == K)
                    count++;
            }
            else continue;

        }
        cout << "Case #" << test << ": " << count << endl;
    }
    return 0;
}