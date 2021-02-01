/**********************************************
Author: kushuu   File: find duplicate.cpp    Date: Tue Nov 03 2020
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
        // approach #1 : sorting. complexity : O(nlogn) and space : O(1).
        /*ll n; cin >> n;
        ll arr[n];
        fo(i, n) cin >> arr[i];
        sort(arr, arr+n);
        for(ll i = 1; i < n; i++) if(arr[i] == arr[i-1]) {cout << arr[i] << endl; break;}*/

        // approach #2 : set. complexity : O(n) and space : O(n)
        /*ll n; cin >> n;
        ll arr[i]; fo(i, n) cin >> arr[i];
        set<int> check;
        fo(i, n) {
            if(check.find(i) == check.end()) check.insert(i);
            else {
                cout << i << endl;
                break;
            }
        }*/

        // approach #3 : floyd's tortoise and hare. complexity : O(n) and space : O(1).
        ll n; cin >> ;
        ll arr[n]; fo(i, n) cin >> arr[i];
        // okay idk this approach, if you know how it works, please make a PR.
    }
    return 0;
}