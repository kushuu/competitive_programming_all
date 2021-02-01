/**********************************************
Author: kushuu   File: permutations.cpp    Time: Tue Aug 04 2020
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
    ll n; cin >> n;
    if(n == 1) cout << 1;
    else if(n <= 3) {
        cout << "NO SOLUTION";
    }
    else if(n == 4) cout << "2 4 1 3";
    else {
        for(ll i = 1; i <= n; i+=2)
            cout << i << " ";
        for(ll i = 2; i <= n; i+=2)
            cout << i << " ";
    }
    return 0;
}