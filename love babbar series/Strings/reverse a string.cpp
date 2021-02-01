/**********************************************
Author: kushuu   File: reverse a string.cpp    Date: Fri Nov 06 2020
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
        string s; cin >> s;
        // approach #1 : simple loop
        for(ll i = 0; i < s.size()/2; i++) 
            swap(s[i], s[s.size()-1-i]);
        cout << s << endl;

        // approach #2 : using stack.
        string s; cin >> s;
        stack<char> check;
        for(auto i : s)
            check.push(i);

        while(!check.empty()) {
            cout << check.top();
            check.pop();
        }
    }
    return 0;
}