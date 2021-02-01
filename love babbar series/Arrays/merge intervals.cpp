/**********************************************
Author: kushuu   File: merge intervals.cpp    Date: Tue Nov 03 2020
**********************************************/

#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define vvll vector<vector<long long int>
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

bool compare( const pair<ll,ll>& v1, const pair<ll,ll>& v2 ) { 
    return v1.F < v2.F; 
} 

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        /*
        vpll intervals;
        ll n; cin >> n;
        fo(i, n) {
            fo(i, 2) {
                ll begin, end;
                cin >> begin >> end;
            }
            intervals.pb({begin, end});
        }

        sort(intervals.begin(), intervals.end(), compare);
        stack<pair<ll, ll>> check;
        check.push(intervals[0]);
        
        for(ll i = 1; i < intervals.size(); i++) {
            pair<ll, ll> top = check.top();
            if(top.S < intervals[i].F)
                check.push(intervals[i]);
            else if(top.S < intervals[i].S) {
                top.S = intervals[i].S;
                check.pop();
                check.push(top);
            }
        }
        vpll ans;
        while(!check.empty()) {
            ans.pb(check.top());
            check.pop();
        }
        reverse(ans.begin(), ans.end());
        */

        // "interals" was passed as an vvll to the function on leetcode.
        if(intervals.size() <=1 ) return intervals;
        sort(intervals.begin(), intervals.end());
        stack<vector<int>> check;
        check.push(intervals[0]);
        
        for(int i = 1; i < intervals.size(); i++) {
            vector<int> top = check.top();
            if(top[1] < intervals[i][0])
                check.push(intervals[i]);
            else if(top[1] < intervals[i][1]) {
                top[1] = intervals[i][1];
                check.pop();
                check.push(top);
            }
        }
        vector<vector<int>> ans;
        while(!check.empty()) {
            ans.push_back(check.top());
            check.pop();
        }
        reverse(ans.begin(), ans.end());
        for(auto i : ans) cout << i.F << " " << i.S << endl;
    }
    return 0;
}