/**********************************************
Author: kushuu   File: new year chaos.cpp    Date: Mon Oct 12 2020
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
        ll n; cin >> n;
        ll ans = 0;
        ll arr[n]; fo(i , n) cin >> arr[i];
        bool pos = true;
        for(int i = n-1; i >= 0; i--) {
            if(i < arr[i]-3) {
                pos = false;
                break;
            }
            for(int j = max(0LL, arr[i]-2) ; j < i; j++) {
                if(arr[j] > arr[i])
                    ans++;
            }
        }
        if(pos)
            cout << ans << endl;
        else
            cout << "Too chaotic\n";
    }
    return 0;
}

// 5 - 2
// 6 - 3
// 1 2 3 6 7 5 4
// 2 < 5-3 -> false.
// 1 2 3 7 5 8 6 4
// 1 5 4 2 3 6
// 1 5 3 2 4 6