/****************************************************************
Author: kushuu   File: sum of 2 numbers.cpp    Date: Sat Mar 20 2021
****************************************************************/

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
#define fo(i,x,y) for(long long i = x; i < y; i++)
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
    ll n, x; cin >> n >> x;
    vll check(n); fo(i,0,n) cin >> check[i];
    vll temp = check;
    sort(check.begin(), check.end());
    ll start = 0, end = n-1, first = -1, second;
    while(start < end) {
        if(check[start] + check[end] == x) {
            first = check[start];
            second = check[end];
            break;
        }
        if(check[start] + check[end] < x) start++;
        else end--;
    }
    // cout << first << " " << second;
    if(first == -1) cout << "IMPOSSIBLE";
    else {
        fo(i,0,n) {
            if(temp[i] == first || temp[i] == second) cout << i+1 << " " ;
        }
    }
    return 0;
}