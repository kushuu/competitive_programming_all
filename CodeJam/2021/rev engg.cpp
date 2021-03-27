/****************************************************************
Author: kushuu   File: rev engg.cpp    Date: Sat Mar 27 2021
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
    fo(test, 1, t+1) {
        cout << "Case #" << test << ": ";
        
        ll n, c; cin >> n >> c;
        if(c < n-1 or c > (n*(n+1)/2 - 1)) {
            cout << "IMPOSSIBLE\n";
            continue;
        }
        vll check(n);
        fo(i, 0, n) check[i] = i+1;
        ll i = 0;
        while(c > 1) {
            if(c <= n - i-1) {
                break;
            }
            c -= n - i;
            reverse(check.begin()+i, check.end());
            i++;
        }

        for(auto i : check) cout << i << " " ; cout << endl;
    }
    return 0;
}