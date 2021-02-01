/**********************************************
Author: kushuu   File: ADADISH.cpp    Date: Fri Nov 09 2020
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
        ll n; cin >> n;
        ll ans = 0;
        priority_queue<ll> arr;
        fo(i, n) {
            ll ele; cin >> ele;
            arr.push(ele);
        }
        ll first, second;
        while(!arr.empty()) {
            first = arr.top();
            arr.pop();
            if(arr.size() >= 1) {
                second = arr.top();
                arr.pop();
                ans += second;
                first -= second;
            }
            else {
                ans += first;
                first = 0;
            }
            if(first != 0) arr.push(first);
            // cout << "check\n";
        }
        cout << ans << endl;
    }
    return 0;
}