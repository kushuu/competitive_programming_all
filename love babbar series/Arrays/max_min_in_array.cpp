/**********************************************
Author: kushuu   File: max_min_in_array.cpp    Date: Mon Nov 02 2020
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
        //approach #1 : sorting the array. complexity : O(nlogn).
        /*ll n; cin >> n; 
        ll arr[n]; fo(i, n) cin >> arr[i];
        sort(arr, arr+n);
        cout << arr[0] << " " << arr[n-1] << endl;*/

        // approach #2 : checking while taking input. complexity : O(n).
        ll n; cin >> n;
        ll arr[n], min_ans = LLONG_MAX, max_ans = LLONG_MIN;
        fo(i, n) {
            cin >> arr[i];
            min_ans = min(min_ans, arr[i]);
            max_ans = max(max_ans, arr[i]);
        }
        cout << min_ans << " " << max_ans << endl;
    }
    return 0;
}