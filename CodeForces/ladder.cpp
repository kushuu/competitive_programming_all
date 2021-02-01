/**********************************************
Author: kushuu   File: ladder.cpp    Date: Tue Aug 25 2020
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

bool check(ll arr[], ll start, ll end) {
    bool dec = false;
    for(ll i = start; i < end; i++) {
        if(arr[i] < arr[i-1])
            dec = true;
        else if(arr[i] < arr[i-1] && !dec)
            return false;
        if(arr[i] > arr[i-1] && dec)
            return false;
    }
    return true;
}

int main() {
    fastIO;
    ll n, m;
    cin >> n >> m;
    ll nums[n];
    fo(i, n) cin >> nums[i];
    while(m--) {
        ll l, r; cin >> l >> r;
        bool ans = check(nums, l, r);
        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}