/**********************************************
Author: kushuu   File: SAVKONO.cpp    Date: Sat Oct 10 2020
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

ll sumPOw(ll num) {
    ll ans = 0;
    while(num) {
        ans += num;
        num >>= 1;
    }
    //cout << ans;
    return ans;
}
int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll K, N, powCnt =  0; cin >> N >> K;
        priority_queue<ll> check;
        fo(i, N) {
            ll ele; cin >> ele;
            check.push(ele);
        }

        ll ans = 0;
        while(K > 0 && check.size()) {
            check.push(check.top()/2);
            K -= check.top();
            check.pop();
            ans++;
        }
        if(K > 0) cout << "Evacuate\n";
        else cout << ans << endl;
    }
    return 0;
}

// 4 + 5 + 5 + 6 + 3