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
    ll N, ans = 0;   cin >> N;
    ll minutes[N]; for(ll i = 0; i < N; i++) cin >> minutes[i];
        if(N <= 3) {
            if(N==1)
                cout << minutes[0] << endl;
            else if(N == 2) 
                cout << min(minutes[0], minutes[1]) << endl;
            else
                cout << min(minutes[0], min(minutes[1], minutes[2])) << endl;
            return 0;
        }
        ll dp[N];
        dp[0] = minutes[0];
        dp[1] = minutes[1];
        dp[2] = minutes[2];
        for(ll i = 3; i < N; i++) {
            dp[i] = minutes[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
        }
        //for(auto i: dp) cout << i << " " ; cout << endl;
    cout << min(dp[N-1], min(dp[N-2], dp[N-3])) << endl;
    return 0;
}