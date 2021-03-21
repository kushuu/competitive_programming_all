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
        ll N, Q; cin >> N >> Q;
        ll doors[N-1]; for(ll i = 0; i < N-1; i++) cin >> doors[i];
        
        while(Q--) {
            ll S, K; cin >> S >> K;
            ll currPos = S;
            vll finalArr;
            if(S == 1)
                for(ll i = 1; i <= N; i++) finalArr.pb(i);
            else 
                for(ll i = 1; i <= N; i++) {
                    if(currPos != 1) {
                        ll pushEle;

                    }
                    else {

                    }
                    currPos = (doors[])
                }
        }
        //for(auto i : doors) cout << i << " ";
    }
    return 0;
}