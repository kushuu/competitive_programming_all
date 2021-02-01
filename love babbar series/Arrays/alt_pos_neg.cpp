/**********************************************
Author: kushuu   File: alt_pos_neg.cpp    Date: Wed Nov 04 2020
**********************************************/

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
#define fo(i,n) for(long long i = 0; i < n; i++)
#define easyfo(x, n) for(auto i : n)
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

void sep(vll& vec) {
    ll lastNeg = 0;
    cout << "here";
    fo(i, vec.size()) {
        if(vec[i] < 0) {
            if(i != lastNeg) swap(vec[i], vec[lastNeg]);
            lastNeg++;
        }
    }
}
int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        // approach #1 : using extra space. 
        // ll n; cin >> n;
        // vll pos, neg, vec(n);
        // fo(i, n) {
        //     cin >> vec[i];
        //     if(vec[i] < 0)  neg.pb(vec[i]);
        //     else pos.pb(vec[i]);
        // }
        // for(ll i = 0; i < min(neg.size(), pos.size()); i++) {
        //     if(!(i&1)) cout << neg[i] << " " ;
        //     else cout << pos[i] << " " ;
        // }

        // approach #2 : using constant space.
        ll n, negCnt = 0; cin >> n;
        vll vec(n); 
        fo(i, n) {
            cin >> vec[i]; 
            if(vec[i]<0) 
                negCnt++;
        }
        
        sep(vec);
        for(auto i : vec) cout << i << " " ;
        for(ll i = negCnt, pos = 1; i < n; i++, pos += 2) {
            swap(vec[i], vec[pos]);
        }
        for(auto i : vec) cout << i << " " ; cout << endl;

    }
    return 0;
}