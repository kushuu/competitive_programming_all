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
        ll N, idx = 0; cin >> N;
        string ans = to_string(N);
        reverse(ans.begin(), ans.end());
        for(ll i = 0; i < ans.size(); i++) {
            if(ans[i] == '0')
                idx++;
            else 
                break;
        }
        for(ll i = idx; ans[i] != '\0'; i++)
            cout << ans[i];
        cout << endl;
    }
    return 0;
}