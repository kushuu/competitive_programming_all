/****************************************************************
Author: kushuu   File: b.cpp    Date: Fri May 28 2021
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
    vll strength(n);
    fo(i, 0, n) cin >> strength[i];
    sort(strength.begin(), strength.end());

    set<ll> pairedStr;
    fo(i, 0, n/2) {
        pairedStr.insert(strength[i]+strength[n-i-1]);
    }
    
    if(pairedStr.size() == 1) cout << 0;
    else cout << *--pairedStr.end() - *pairedStr.begin();
    return 0;
}

/*
2 3 2 4 5 1
1 2 2 3 4 5
1 5 - 6
2 4 - 6
2 3 - 5
*/