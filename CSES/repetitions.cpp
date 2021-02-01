/**********************************************
Author: kushuu   File: repetitions.cpp    Date: Thu Aug 06 2020
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
    string s; cin >> s;
    //stack<char> ss;
    ll cnt = 0, ans = LLONG_MIN;
    char check = s[0];
    for(ll i = 0; i < s(s); i++) {
        if(s[i] == check)
            cnt++;
        else {
            check = s[i];
            cnt = 1;
        }
        ans = max(ans, cnt);
        //cout << cnt << " " << check << endl;
    }
    cout << ans;
    return 0;
}