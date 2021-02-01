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
    ll N, K, count = 0;    cin >> N >> K;
    ll arr[N]; for(ll i = 0; i < N; i++) cin >> arr[i];
    for(ll i = 0; i < N; i++)
        for(ll j = 0; j < N; j++) {
            if(abs(arr[i] - arr[j]) >= K && i != j) {
                cout << arr[i] << "  " << arr[j] << endl;
                count++;
            }
        }
    cout << count/2;
    return 0;
}