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
        ll N, ele; cin >> N;
        vll numbers; for(ll i = 0; i < N; i++) {cin >> ele; numbers.pb(ele);}
        ll ans = 0;
        for(ll i = 1; i < numbers.size(); i++){
            //cout << abs(numbers[i] - numbers[i-1]) - 1 << " ";
            ans += abs(numbers[i] - numbers[i-1]) - 1;
        }

        cout << ans << endl;
    }
    return 0;
}