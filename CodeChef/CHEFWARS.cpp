/**********************************************
Author: kushuu   File: CHEFWARS.cpp    Date: Sat Aug 08 2020
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
        ll H, P; cin >> H >> P;
        while( H > 0 && P > 0) {
            H -= P;
            P /= 2;
            if(H <= 0) {
                cout << 1 << endl;
                break;
            }
            else if(P <= 0) {
                cout << 0 << endl;
                break;
            }
            //cout << H << " " << P << endl;
        }
    }
    return 0;
}