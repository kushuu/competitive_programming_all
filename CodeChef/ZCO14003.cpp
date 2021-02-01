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
    ll N; cin >> N;
    ll budgets[N]; for(ll i = 0; i < N; i++) cin >> budgets[i];
    sort(budgets, budgets+N);
    //for(auto i: budgets) cout << i << " ";
    //cout << endl;
    ll ans = 0, m = N;
    for(ll i = 0; i < N; i++) {
        ll temp = budgets[i]*m;
        if(temp > ans) 
            ans = temp;
        m--;
    }
    cout << ans << endl;
    return 0;
}