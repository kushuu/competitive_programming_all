/****************************************************************
Author: kushuu   File: code.cpp    Date: Thu Feb 25 2021
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
    ll D, I, S, V, F;
    cin >> D >> I >> S >> V >> F;
    while(S--) {
        unordered_map<string, ll> street_time;
        ll B, E;
        cin >> B >> E;
        string street;
        cin >> street;
        ll L; cin >> L;
        street_time[street] = L;
    }
    while(V--) {
        ll P; cin >> P;
        vector<string> route(P);
        fo(i, 0, P) cin >> route[i];
    }
    return 0;
}