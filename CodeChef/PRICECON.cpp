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
    ll T; cin >> T;
    while(T--) {
        ll N, K;   cin >> N >> K;
        ll arr[N], ans = 0;
        for(ll i = 0; i < N; i++) {
            cin >> arr[i];
            if(arr[i] > K)  ans+=(arr[i] - K);
        }
        cout << ans << endl;
    }
    return 0;
}