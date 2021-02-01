#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
#define ull unsigned long long int
#define maxExpo 63
using namespace std;

vll Binary(ll n) { 
    vll v(maxExpo, 0);
    int bit;
    for(ll i = 0; n != 0; i++) {
        bit = n%2;
        v[i] = bit;
        n/=2;
    }
    for(ll i = 0; i < v.size(); i++)    cout << v[i] << " ";
    cout << endl;
    return v;
}

ll Decimal(vll number) {
    ll result;
    for(ll i = number.size()-1; i >= 0; i--) {
        if(number[i] == 1) {
            result += 1LL<<i;
        }
    }
    return result;
}

ll solve(ll a, ll b, ll newZ) {
    ll ans = (a & newZ)*(b & newZ);
    return ans;
}

int main() {
    fastIO;
    ll t;
    cin >> t;
    //ll correctCtr = 0, incorrectCtr = 0;
    for(ll q = 0; q < t; q++) {
        ll x, y, l, r; 
        cin >> x >> y >> l >> r;
        ll verdict, ans;
        ll OR = x | y;
        if(min(x, y) == 0)
            ans = 0;
        else if(l <= OR && r >= OR)
            ans = OR;
        else {
            ll oar = OR&r;
            ll orAns = solve(x, y, OR);
            vll Rarr = Binary(r);
            vll OARarr = Binary(oar);
            vll ORarr = Binary(OR);
            ll zAns = solve(x, y, r), z = r;
            for(ll i = 0; i < maxExpo; i++) {
                vll newZ;
                if(Rarr[i] == 1) {
                    for(ll j = 0; j < i; j++) {
                        if(ORarr[j] == 1) {
                            newZ.push_back(1);
                        }
                    }
                    for(ll j = i+1; j < maxExpo; j++) {
                        if(OARarr[j] == 1) {
                            newZ.push_back(1);
                        }
                    }
                    ll comp = Decimal(newZ);
                    ll newZAns = solve(x, y, comp);
                    cout << comp << " " << newZAns << endl;
                    if(comp <= r && comp >= l) {
                        if((newZAns > zAns && comp < r) || (newZAns >= zAns && comp < z)) {
                            z = comp;
                            zAns = newZAns;
                        }
                    }
                }
            }
            if(zAns == 0)
                ans = 0;
            else 
                ans = z;
        }
        cout << ans << endl;
    }
    return 0;
}