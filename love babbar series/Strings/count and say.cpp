/**********************************************
Author: kushuu   File: check and say.cpp    Date: Fri Nov 06 2020
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

string conv(string s) {
    stack<char> check;
    ll cnt = 1;
    string ans = "";
    check.push(s[0]);
    for(ll i = 1; i < s(s); i++) {
        if(check.top() == s[i]) cnt++;
        else {
            ans += check.top()+to_string(cnt);
            check.push(s[i]);
            cnt = 1;
        }
    }
    // cout << check.top() << " " << cnt << endl;
    ans += check.top()+to_string(cnt);
    return ans;
}

int main() {
    fastIO;
    // ll t; cin >> t;
    // while(t--) {
        string s = conv("11223");
        cout << s;
    // }
    return 0;
}