/**********************************************
Author: kushuu   File: CHECHOC.cpp    Time: Sun Jul 26 2020
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
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll n, m, x, y; cin >> n >> m >> x >> y;
        if(x < y)
            cout << y * n * m / 2 << endl;
        else
            cout << 
    }
    return 0;
}