/****************************************************************
Author: kushuu   File: CHAOSEMP.cpp    Date: Tue Apr 06 2021
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

    // perform binary search in a 2D matrix.
    ll T, Q, D; cin >> T >> Q >> D;
    while(T--) {
        if(!D) {
            ll maxH = LLONG_MAX, maxK = LLONG_MAX, minH = 0, minK = 0;
            cout << "1 0 0 " << endl;
            string res; cin >> res;
            while(res != "O") {
                
            }
        }
    }
    return 0;
}