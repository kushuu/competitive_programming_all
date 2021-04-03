/****************************************************************
Author: kushuu   File: AMREL.cpp    Date: Sat Apr 03 2021
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
        // cout << setprecision(2);
        ll n; cin >> n;
        ll total = 0;
        ll arr[n]; fo(i, 0, n) cin >> arr[i];
        for(auto i : arr) {
            if(i == 100) total += 10;
            else if(i == 99) total += 9;
            else if(i == 98) total += 8;
            else if(i == 97) total += 7;
            else if(i == 96) total += 6;
            else if(i <= 95 and i >= 57) total += 5;
            else if(i <= 56 and i >= 35) total += 4;
        }
        // cout << floor((double)total/n+0.5) << endl;;
        cout << (double)total/n << endl;
    }
    return 0;
}