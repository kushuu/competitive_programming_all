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

ll front(vll money, ll keys) {
    ll value = 0;
    for(ll i = 0; i < keys; i++) {
        //cout << money[i] << " ";
        value += money[i];
    }
    //cout << endl;

    return value;
}

ll back(vll money, ll keys) {
    ll value = 0;
    for(ll i = money.size()-1; i >= (money.size() - keys); i--)  {
        //cout << money[i] << " ";
        value += money[i];
    }
    //cout << endl;
    
    return value;
}

int main() {
    fastIO;
    ll ele, N; cin >> N;
    vll money; for(ll i = 0; i < N; i++) { cin >> ele; money.push_back(ele);}
    //for(ll i: money) cout << i << " "; cout << endl;
    ll k; cin >> k;
    ll moneyFromFront = front(money, k);
    ll moneyFromBack = back(money, k);
    //cout << moneyFromFront << " " << moneyFromBack << endl;
    ll ans = moneyFromFront>moneyFromBack? moneyFromFront: moneyFromBack;
    cout << ans;
    return 0;
}