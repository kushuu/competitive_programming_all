/**********************************************
Author: kushuu   File: longest palindrome.cpp    Date: Fri Nov 06 2020
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

string solve() {
    string s; cin >> s;
    ll n = s.size();
    ll bestLen = 1, len;
    string ans = "";
    // first check for the odd length palindromes.
    for(ll mid = 0; mid < n; mid++) {
        for(ll start = 0; mid-start >= 0 && start+mid < n; start++) {
            if(s[mid - start] != s[start+mid]) break;
            ll len = 2*start+1;
            if(len > bestLen) {
                bestLen = len;
                ans = s.substr(mid-start, len);
            }
        }
    }

    // this one is for even length palindromes.
    for(ll mid = 0; mid < n; mid++) {
        for(ll start = 1; mid-start+1 >= 0 && start+mid < n; start++) {
            if(s[mid - start+1] != s[start+mid]) break;
            ll len = 2*start;
            if(len > bestLen) {
                bestLen = len;
                ans = s.substr(mid-start+1, len);
            }
        }
    }
    if(ans != "")
        return ans;
    else
        return s.substr(0, 1);
}

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
    return 0;
}