#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define pb push_back
#define vll vector<long long int>
#define vpll vector<pair<long long, long long>>
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
#define MAX 31
//program specific shorts (if any)
//
using namespace std;

void decToBinary(ll n, ll bitKeep[MAX]) { 
    ll i = 0; 
    while (n > 0) { 
        bitKeep[i] += n % 2; 
        n /= 2; 
        i++; 
    }
} 

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll bitKeep[MAX] = {0};
        ll n, k; cin >> n >> k;
        ll a[n];
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            decToBinary(a[i], bitKeep);
        }
        vpll vals;
        //for(ll i = 0; i < MAX; i++) cout << bitKeep[i] << " "; cout << endl;
        for(ll i = 0; i < MAX; i++) {
            if(bitKeep[i])
                vals.pb(mp(bitKeep[i] * (1<<i), i));
        }
        //for(auto x : vals) cout << x.second << " " << x.first << endl;
        sort(vals.rbegin(), vals.rend());
        ll ansArr[MAX] = {0};
        for(ll i = 0, x = 0; i < MAX && x < k; i++, x++)
            ansArr[vals[i].second] = 1;
        //for(ll i = 0; i < MAX; i++) cout << ansArr[i] << " "; cout << endl;
        ll ans = 0;
        for(ll i = 0; i < MAX; i++)
            if(ansArr[i])
                ans += (1<<i);
        cout << ans << endl;
    }
    return 0;
}