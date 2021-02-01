#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define ld long double
#define pb push_back
#define mp make_pair
#define umll unordered_map<long long int>
#define mll map<long long int>
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
        ll N; cin >> N;
        ll wallVal[N]; for(ll i = 0; i < N; i++) cin >> wallVal[i];
        //for(auto i : wallVal) cout << i << " " ; cout << endl;
        ll Q; cin >> Q;
        while(Q--) {
            ll x, y;
            cin >> x >> y;
            {
                //   APPROACH ONE- WORKS FINE BUT TLE   //
                /*bool flag = true;
                //for(ll i : wallVal) if(x+y == i) { cout << -1 << endl; continue; }
                ll ans = 0;
                for(ll i : wallVal) {
                    if(x+y > i)
                        ans++;
                    else if(x+y == i) {
                        flag  = false;
                        break;
                    }         
                    else 
                        break;       
                }
                if(flag)
                    cout << ans << endl;
                else
                    cout << -1 << endl;*/
            }
            //    APPROACH TWO- LOWER_BOUND STL      //
            if(wallVal[ LOWER_BOUND(wallVal, wallVal+N , x+y) - wallVal] == x+y)
                cout << -1 << endl;
            else
                cout << LOWER_BOUND(wallVal, wallVal+N, x+y) - wallVal << endl;

        }
    }
    return 0;
}