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
        string line;    cin >> line;
        ll count = 0;
        for(ll i = 0; i < line.size(); i++) {
            if((line[i] == 'x' && line[i+1] == 'y') || (line[i] == 'y' && line[i+1] == 'x')) {
                count++;
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}