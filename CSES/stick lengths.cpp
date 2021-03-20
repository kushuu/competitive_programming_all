/****************************************************************
Author: kushuu   File: stick lengths.cpp    Date: Sat Mar 20 2021
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
    ll n; cin >> n;
    vll check(n); fo(i,0,n) cin >> check[i];

    sort(check.begin(), check.end());
    if(n&1) {
        ll median = check[n/2], ans = 0;
        
        fo(i,0,n) ans += abs(check[i]-median);

        cout << ans;
    }
    else {
        ll ele1 = check[n/2], ele2 = check[n/2+1], ans1 = 0, ans2 = 0;

        fo(i,0,n) ans1 += abs(check[i]-ele1);
        fo(i,0,n) ans2 += abs(check[i]-ele2);

        cout << min(ans1, ans2);
    }
    return 0;
}