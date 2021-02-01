/**********************************************
Author: kushuu   File: concert tickets.cpp    Date: Thu Sep 17 2020
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

int main() {
    fastIO;
    ll n, m, ele; cin >> n >> m;
    vll prices, aukat;
    
    fo(i, n) {cin >> ele ; prices.pb(ele);}
    fo(i, m) {cin >> ele ; aukat.pb(ele);}
    
    sort(prices.begin(), prices.end());
    for(auto i : aukat) {
        //for(auto i : prices) cout << i << " " ; cout << endl;
        if(lower_bound(prices.begin(), prices.end(), i) == prices.end()) cout << -1 << endl;
        else{
            cout << *lower_bound(prices.begin(), prices.end(), i) << endl;
            prices.erase(lower_bound(prices.begin(), prices.end(), i));
        }    
    }
    
    return 0;
}