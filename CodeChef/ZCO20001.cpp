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

/*vll concat(vll l, vll r) {
    ll lSize = l.size(), rSize = r.size();
    vll ans;
    for(ll i = 0; i < lSize; i++) ans.push_back(l[i]);
    for(ll i = 0; i < rSize; i++) ans.push_back(r[i]);
    return ans;
}*/

vll order(vll arr, ll i) {
    if(arr.size() <= 1)
        return arr;
    vll l, r;
    ll n = arr.size()-1;
    for(ll j = 0; j <= n; j++) {
        if(arr[j] % (1<<(i+1)) < (1<<i)) {
            l.push_back(arr[j]);
        }
        else
            r.push_back(arr[j]);
    }
    l = order(l, i+1);
    r = order(r, i+1);
    vll c(l);
    c.insert(c.end(), r.begin(), r.end());
    return c;
}

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll p, idx; cin >> p >> idx;
        ll ele = (1<<p) - 1;
        //cout << ele << endl;
        vll arr;
        for(ll i = 0; i <= ele; i++) arr.push_back(i);
        //for(auto i: arr) cout << i << " "; cout << endl;
        vll ans = order(arr, 0);
        //for(auto i: ans) cout << i << " "; cout << endl;
        cout << ans[idx] << endl;
    }
    return 0;
}