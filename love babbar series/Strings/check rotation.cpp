/**********************************************
Author: kushuu   File: check rotation.cpp    Date: Fri Nov 06 2020
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
    ll t; cin >> t;
    while(t--) {
        string s1, s2; cin >> s1 >> s2;
        // approach #1 : doubling the input string. complexity : O(2*n). where n is the length of s1.
        s1 += s1;
        // cout << s1 << endl;
        for(ll i = 0; i < s(s1); i++) {
            if(s1.substr(i, s2.size()) == s2) {cout << "YES\n"; return 0;}
        }
        cout << "NO\n";
    }
    return 0;
}