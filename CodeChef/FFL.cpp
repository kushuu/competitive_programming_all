/**********************************************
Author: kushuu   File: FFL.cpp    Time: Fri Apr 03 2020
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
    for (ll q = 0; q < t; q++)
    {
        ll n, s;
        cin >> n >> s;
        ll a[n], b[n];
        vector<ll> zero, one;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 0)
                zero.push_back(a[i]);
            else
                one.push_back(a[i]);
        }
        //cout << *min_element(zero.begin(), zero.end()) + *min(one.begin(), one.end()) << endl;
        if (*min_element(zero.begin(), zero.end()) + *min_element(one.begin(), one.end()) <= 100 - s)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}