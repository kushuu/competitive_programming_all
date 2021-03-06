/****************************************************************
Author: kushuu   File: Josephus Problem I.cpp    Date: Wed Mar 24 2021
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
    vll check(n);
    for(ll i = 0; i < n; i++) {
        check[i] = -1;
    }

    for(ll i = 2; !check.empty(); i = (i+2)%n) {
        if(check[i] < 0) {
            cout << i << " " ;
            check[i] = 1;
        }
    }
    return 0;
}