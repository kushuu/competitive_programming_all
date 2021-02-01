/**********************************************
Author: kushuu   File: DPAIRS.cpp    Date: Sun Oct 11 2020
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
    ll N, M; cin >> N >> M;
    ll A[N],B[M];
    fo(i, N) cin >> A[i];
    fo(i, M) cin >> B[i];

    set<ll> check;
    vpll ans;
    fo(i, N) {
        fo(j, M) {
            if(check.find(A[i]+B[j]) == check.end()) {
                ans.pb({i, j});
                check.insert(A[i]+B[j]);
            }
        }
    }
    ll temp = N+M-1;
    for(auto i : ans) {
        if(temp)cout << i.F << " " << i.S << endl;
        else break;
        temp--;
    }
    return 0;
}