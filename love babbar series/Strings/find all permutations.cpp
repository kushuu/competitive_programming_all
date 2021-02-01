/**********************************************
Author: kushuu   File: find all permutations.cpp    Date: Sat Nov 07 2020
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

set<string> check;
void permute(string s, ll l, ll r) {
    if(l == r) check.insert(s);

    for(ll i = l; i <= r; i++) {
        swap(s[l], s[i]);
        permute(s, l+1, r);
        swap(s[l], s[i]);
    }
}
int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        check.clear();
        permute(s, 0, s(s)-1);
        for(auto i : check) cout << i << " ";
        cout << endl;
    }
    return 0;
}