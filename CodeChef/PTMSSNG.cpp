#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define ld long double
#define pb push_back
#define mp make_pair
#define vpll vector<pair<long long int, long long int>>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll N, p1, p2, x, y; cin >> N;
        vll xVals, yVals;
        for(ll i = 0; i < 4*N-1; i++) {
            cin >> p1 >> p2;
            xVals.pb(p1); yVals.pb(p2);
        }
        x = xVals[0]; y = yVals[0];
        for(ll i = 1; i < xVals.size(); i++) 
            x = x^xVals[i];
        for(ll i = 1; i < yVals.size(); i++)
            y = y^yVals[i];
        cout << x << " " << y << endl;
    }
    return 0;
}