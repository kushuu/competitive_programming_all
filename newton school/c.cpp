/****************************************************************
Author: kushuu   File: c.cpp    Date: Fri May 28 2021
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

bool fun(ll a, ll b) {
    if(a == b) return 1;
    bool check = false;
    for(ll i = 2; i*i <= b and a+i <= b; i++) {
        if(a%i == 0) {
            check = fun(a+i, b);
        }
    }
    return check;
}

int main() {
    fastIO;
    ll a, b; cin >> a >> b;
    if(fun(a, b)) cout << "Yes";
    else cout << "No";
    return 0;
}