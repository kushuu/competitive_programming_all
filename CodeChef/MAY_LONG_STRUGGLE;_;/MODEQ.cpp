/****************************************************************
Author: kushuu   File: MODEQ.cpp    Date: Tue May 11 2021
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
        ll N, M; cin >> N >> M;
        ll ans = 0;
        // fo(i, 1, N+1) {
        //     fo(j, i+1, N+1) {
        //         if((M%i)%j == (M%j)%i) ans++;
        //     }
        // }
        // cout << ans << " ";
        // ans = 0;

        vll check(N+1, 1);
        fo(a, 2, N+1) {
            ll check_t = M%a;
            ans += check[check_t];
            for(ll b = check_t; b <= N; b += a) {
                check[b]++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}