/****************************************************************
Author: kushuu   File: balanced paranthesis.cpp    Date: Sun Nov 08 2020
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
    ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        if(s(s) == 1) {cout << "not balanced\n"; continue;}
        map<char, char> close;
        close['('] = ')';
        close['['] = ']';
        close['{'] = '}';
        stack<char> check;
        check.push(s[0]);
        fo(i, 1, s(s)) {
            if(s[i] == close[check.top()])
                check.pop();
            else 
                check.push(s[i]);
        }
        if(check.empty()) cout << "balanced\n";
        else cout << "not balanced\n";
        // while(!check.empty()) {cout << check.top(); check.pop();}
    }
    return 0;
}