/**********************************************
Author: kushuu   File: COOK82C.cpp    Date: Sat Aug 22 2020
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
	ll n,m;
	cin >> n >> m;
	ll a[n];
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	queue<ll> q1;
	queue<ll> q2;
	for (ll i = n-1; i >= 0; i--) q1.push(a[i]);
	ll ans[63000005];
 
	for (ll i = 1; i <= 63000000; i++){
	    if (q2.empty()){
	        if (q1.empty()) break;
	        ll x = q1.front();
	        q1.pop();
	        ans[i] = x;
	        q2.push(x/2);
	    }
	    else if (q1.empty()){
	        ll x = q2.front();
	        q2.pop();
	        ans[i] = x;
	        q2.push(x/2);
	    }
	    else {
	        ll x = q1.front();
	        ll y = q2.front();
	        if (x > y){
	            ans[i] = x;
	            q2.push(x/2);
	            q1.pop();
	        }
	        else{
	            ans[i] = y;
	            q2.push(y/2);
	            q2.pop();
	        }
	    }
	}
    while (m --){
        ll q;
        cin >> q;
        cout << ans[q] << "\n";
    }
}