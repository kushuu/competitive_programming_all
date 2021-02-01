#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll n, p; cin >> n >> p;
        ll a[n+1][n+1];
        for(ll i = 0; i < n+1; i++)
            for(ll j = 0; j < n+1; j++)
                a[i][j] = 0;
        ll resp;
        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= n; j++) {
                cout << "1 " << i << " " << j << " " << i << " " << j << endl;
                cin >> resp;
                if(resp == 1)
                    a[i][j] = 1;
            }
        }
        cout << "2" << endl;
        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cin >> resp;
        if(resp == -1)
            break;
    }
    return 0;
}