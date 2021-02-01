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
        ll G; cin >> G;
        while(G--) {
            ll I, N, Q; cin >> I >> N >> Q;
            if( (N&1) == 0 )
                cout << N/2 << endl;
            else {
                if(I == Q)
                    cout << N/2 << endl;
                else
                    cout << N/2+1 << endl;
            }
        }
    }
    return 0;
}