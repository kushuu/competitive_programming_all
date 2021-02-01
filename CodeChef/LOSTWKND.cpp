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
        ll arr[5];
        ll sum = 0;
        for(ll i = 0; i < 5; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        ll P;   cin >> P;
        if(sum*P <= 120)    cout << "No" << endl;
        else    cout << "Yes" << endl;

    }
    return 0;
}