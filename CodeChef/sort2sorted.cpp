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
    ll sa, sb, ele; cin >> sa >> sb;
    vll a, b;
    for(ll i = 0; i < sa; i++) {cin >> ele; a.pb(ele);}
    for(ll i = 0; i < sb; i++) {cin >> ele; b.pb(ele);}
    vll ans;
    int p1 = 0, p2 = 0;
    for(int i = 0; p1 != sa && p2 != sb; i++) {
        if(a[p1] < b[p2]) {
            ans.pb(a[p1]);
            p1++;
        }
        else {
            ans.pb(b[p2]);
            p2++;
        }
    }
    //cout << p1 << " " << p2 << endl;
    if(p1 == sa) {  // p1 reached the end of a
            for(int i = p2; i < sb; i++)
                ans.pb(b[i]);
    }
    else {
        for(int i = p1; i < sa; i++)
            ans.pb(a[i]);
    }
    for(auto i : ans) cout << i << " ";

    return 0;
}