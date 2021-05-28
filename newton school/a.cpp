/****************************************************************
Author: kushuu   File: a.cpp    Date: Fri May 28 2021
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
    vll fib(n+1);
    fib[0] = 0;
    fib[1] = 1;
    fo(i, 2, n) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    // for(auto i : fib) cout << i << " " ;
    if(fib[n-1]&1) cout << "Alive";
    else cout << "Dead";
    return 0;
}