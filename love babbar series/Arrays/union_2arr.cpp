/**********************************************
Author: kushuu   File: union_2arr.cpp    Date: Tue Nov 03 2020
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
	int t = 0; cin >> t;
	while(t--) {
	    int N, M;
	    cin >> N >> M;
	    int A[N], B[M];
	    set<int> ans;
	    for(int i = 0; i < N; i++) {
	        cin >> A[i];
	        ans.insert(A[i]);
	    }
	    for(int i = 0; i < M; i++) {
	        cin >> B[i];
	        ans.insert(B[i]);
	    }
	    
	    cout << ans.size() << endl;
	}
	return 0;
}
//kuch nai time pass.