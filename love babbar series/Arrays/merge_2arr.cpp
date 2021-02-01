/**********************************************
Author: kushuu   File: merge_2arr.cpp    Date: Tue Nov 03 2020
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
        int n, m; cin >> n >> m;
        int arr1[n], arr2[m];
        fo(i, n) cin >> arr1[i];
        fo(i, m) cin >> arr2[i];
        
        // approach #1 : printing the elements on the go. complexity : O(n+m) and space : O(1).
        /*int i, j, k;
	    for(i = 0, j = 0; i < n, j < m; ) {
	        if(arr1[i] < arr2[j]) {cout << arr1[i] << " " ; i++;}
	        if(arr1[i] > arr2[j]) {cout << arr2[j] << " " ; j++;}
	        else {cout << arr1[i] << " " ; i++; }
	    }
	    if(i == n) {
	        for(int k = j; k < m; k++) cout << arr2[k] << " " ;
	    }
	    else if(j == m){
	        for(int k = i; k < n; k++) cout << arr1[k] << " " ;
	    }*/

        // approach #2 : sort by swapping. complexity : O((m+n)log(m+n)) and space : O(1).
        // im not able to implement this ;_; 
        // if you know the solution, pls make a PR.
    }
    return 0;
}