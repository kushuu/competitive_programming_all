/**********************************************
Author: kushuu   File: Roma and Changing Signs.cpp    Date: Wed Aug 05 2020
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

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

bool sign(ll ele, vll arr) {
    for(ll i = 0; i < s(arr); i++) {
        if(arr[i] == ele)
            return (arr[i]>0);
    }
}

int main() {
    fastIO;
    ll n, k, ele; cin >> n >> k;
    ll arr[n]; for(ll i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(ll i = 0; i < k; i++) 
        arr[i] *= -1;
    
    ll ans = 0;
    for(ll i = 0; i < n; i++) ans += arr[i];
    cout << ans;
    return 0;
}