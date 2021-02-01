/**********************************************
Author: kushuu   File: applee division.cpp    Date: Thu Aug 06 2020
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

ll findMinRec(ll arr[], ll i, ll sumCalculated, ll sumTotal) 
{	if (i==0) 
		return abs((sumTotal-sumCalculated) - sumCalculated); 

	return min(findMinRec(arr, i-1, sumCalculated+arr[i-1], sumTotal), findMinRec(arr, i-1, sumCalculated, sumTotal)); 
}

ll findMin(ll arr[], ll n) 
{ 
	ll sumTotal = 0; 
	fo(i, n)
		sumTotal += arr[i]; 
	return findMinRec(arr, n, 0, sumTotal); 
} 

int main() {
    fastIO;
    ll n; cin >> n;
    ll price[n]; fo(i, n) cin >> price[i];
	cout << findMin(price, n); 
	return 0; 
}