/**********************************************
Author: kushuu   File: movie_festival.cpp    Date: Thurs Mar 13 2021
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

bool cmp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}

int main() {
    fastIO;
    ll n; cin >> n;
    vector<vector<int>> check;
    fo(i, n) {
        int start, end; cin >> start >> end;
        check.push_back({start, end});
    }
    sort(check.begin(), check.end(), cmp);

    ll ans = 1, end = check[0][1];
    for(int i = 1; i < n; i++) {
        if(check[i][0] >= end) {
            ans++;
            end = check[i][1];
        }
    }
    cout << ans;

    return 0;
}