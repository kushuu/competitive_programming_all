/**********************************************
Author: kushuu   File: common_3_sorted.cpp    Date: Wed Nov 04 2020
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
        ll n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        ll v1[n1], v2[n2], v3[n3];
        vll vAns;
        fo(i, n1) cin >> v1[i];
        fo(i, n2) cin >> v2[i];
        fo(i, n3) cin >> v3[i];

        ll p1 = 0, p2 = 0, p3 = 0;
        while(p1 < n1 && p2 < n2 && p3 < n3) {
            if(v1[p1] == v2[p2] && v2[p2] == v3[p3]) {
                vAns.pb(v1[p1]);
                p1++;
                p2++;
                p3++;
            }
            else if(v1[p1] < v2[p2]) p1++;
            else if(v2[p2] < v3[p3]) p2++;
            else p3++;
        }
        for(auto i : vAns) cout << i << " " ; cout << endl;
    }
    return 0;
}