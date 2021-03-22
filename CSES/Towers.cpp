/****************************************************************
Author: kushuu   File: Towers.cpp    Date: Sun Mar 21 2021
****************************************************************/

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
#define fo(i,x,y) for(long long i = x; i < y; i++)
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
    ll n; cin >> n;
    vll ans;
    fo(i, 0, n) {
        ll element;
        cin >> element;
        ll pos = upper_bound(ans.begin(), ans.end(), element) - ans.begin();
        if(pos < ans.size()) ans[pos] = element;
        else ans.push_back(element);
    }
    cout << ans.size();
    return 0;
}