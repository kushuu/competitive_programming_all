/**********************************************
Author: kushuu   File: CHEFSTEP.cpp    Time: Sun Jul 26 2020
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

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll steps[n];
        for(ll i = 0; i < n; i++)
            cin >> steps[i];

        for(auto i : steps)
            if(i%k == 0) cout << 1;
            else    cout << 0 ;
        cout << endl;        
    }
    return 0;
}