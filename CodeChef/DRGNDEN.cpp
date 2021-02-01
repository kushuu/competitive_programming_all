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

vll heights, values;

ll calcTaste(ll startPos, ll endPos) {
    ll taste = 0, maxHt = LLONG_MIN;
    if(startPos < endPos) {
        for(ll i = startPos; i <= endPos; i++) {
            if(heights[i] > maxHt)
                maxHt = heights[i];
        }
        cout << maxHt << endl;
        if(heights[startPos] != maxHt) {
            //cout << "reason: height\t";
            return -1;
        }
        else {
            for(ll i = startPos; i <= endPos; i++) {
            ll curr = startPos;
                //main kaam toh idhar hone hai bhai. Till here i have catered to all the impossible (-1) cases.
                vll sortHt = heights;
                sort(sortHt.begin(), sortHt.end(), greater<>());
                
            }
        }
    }
    else if(endPos < startPos) {
        for(ll i = startPos; i >= endPos; i--)
            if(heights[i] > maxHt)
                maxHt = heights[i];
        cout << maxHt << endl;
        if(heights[startPos] != maxHt) {
            //cout << "reason: height\t";
            return -1;
        }
        else {
            //main kaam toh idhar hone hai bhai. Till here i have catered to all the impossible (-1) cases.
        }
    }
    else
        return values[startPos];
    
    return taste;
}

int main() {
    fastIO;
    ll N, Q, ele; cin >> N >> Q;
    for(ll i = 0; i < N; i++) {cin >> ele; heights.pb(ele);}
    for(ll i = 0; i < N; i++) {cin >> ele; values.pb(ele);}
    //for(auto i : heights) cout << i << " " ; cout << endl;
    //for(auto i : values) cout << i << " " ; cout << endl;

    while(Q--) {
        ll type, b; cin >> type >> b;
        b--;
        if(type == 1) {
            ll k; cin >> k;
            values[b] = k;
        }
        else {
            ll c; cin >> c;
            c--;
            ll ans = calcTaste(b, c);
            cout << ans << endl;
        }
    }
    return 0;
}