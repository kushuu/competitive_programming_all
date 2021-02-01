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
        ll N;   cin >> N;
        string a, b;    cin >> a >> b;
        bool check = true;
        set<char> strSet;
        for(ll i = 0; i < N; i++)   strSet.insert(a[i]);
        for(ll i = 0; i < N; i++) {
            if(strSet.find(b[i]) == strSet.end()) {
                cout << -1 << endl;
                check = false;
                break;
            }
        }
        if(!check) {
            continue;
        }

        
    }
    return 0;
}