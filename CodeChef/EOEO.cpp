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
        ll TS;  cin >> TS;
        if( (TS^1) != TS+1 ) {
            cout << TS/2 << endl;
            continue;
        }
        else {
            while((TS ^ 1) == TS+1)
                TS = TS >> 1;
            //cout << "check " << TS << "  ";
            cout << TS/2 << endl;
        }
    }
    return 0;
}