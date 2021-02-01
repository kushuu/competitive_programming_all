//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
#include <bits/stdc++.h>
//shorts
#define ll long long int 
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

//program specific shorts (if any)
#define mod 1e9+7

using namespace std;


int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 1; q <= t; q++) {
        ll n, a, b, c; cin >> n >> a >> b >> c;
        cout << "Case #" << q << ": ";
        ll ans[n] = {0};
        if((a + b - c > n) && (a < c || b < c))
            cout << "IMPOSSIBLE" << endl;
        else {
            for(ll i = n-b; i < n-b+c; i++)
                ans[i] = n;
            for(ll i = n-b+c, x = 1; i < n; i++, x++)
                ans[i] = n-x;
            // for(auto x : ans) cout << x << " "; cout << endl;
            ll rem = a - c;
            ans[0] = 2;
            ll i = 1;
            for(ll x = 0; i < n-b, x < n-b-rem; i++, x++)
                ans[i] = 1;
            for(ll x = 1; x < rem, i < n-b; i++, x++)
                ans[i] = 2;
            for(auto x : ans) cout << x << " "; cout << endl;
        }

    }
    return 0;
}