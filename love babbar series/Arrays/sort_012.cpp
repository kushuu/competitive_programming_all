/**********************************************
Author: kushuu   File: sort_012.cpp    Date: Tue Nov 03 2020
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
	//code
	int t; cin >> t;
	while(t--) {
        // approach #1 : the smart way. complexity : O(n).
	    int n; cin >> n;
	    int arr[n], zcnt = 0, ocnt = 0, tcnt = 0;
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	        if(arr[i] == 0) zcnt++;
	        else if(arr[i] == 1) ocnt++;
	        else tcnt++;
	    }
        //cout << zcnt << " " << ocnt << " " << tcnt << endl;
        int ans[n] = {0};
        for(int i = 0; i < zcnt; i++) {ans[i] = 0;}
        for(int i = 0+zcnt; i < zcnt+ocnt; i++) {ans[i] = 1;}
        for(int i = 0+zcnt+ocnt; i < zcnt+ocnt+tcnt; i++) {ans[i] = 2;}
        
        for(auto i : ans) cout << i << " " ; cout << endl;
	}
	return 0;
}