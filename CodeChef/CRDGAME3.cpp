/**********************************************
Author: kushuu   File: CRDGAME3.cpp    Date: Sat Aug 08 2020
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
    ll t; cin >> t;
    while(t--) {
        ll pc, pr; cin >> pc >> pr;
        ll lc = pc/9, lr = pr/9;

        if(pc%9 != 0)
            lc++;
        if(pr%9 != 0)
            lr++;
        
        //cout << lc << " " << lr << endl;

        if(lc < lr)
            cout << 0 << " " << lc << endl;
        else
            cout << 1 << " " << lr << endl;
    }
    return 0;
}