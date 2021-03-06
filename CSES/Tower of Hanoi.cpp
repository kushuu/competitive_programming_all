/****************************************************************
Author: kushuu   File: Tower of Hanoi.cpp    Date: Wed Jan 13 2021
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
    int n; cin >> n;
    int steps = 2*n-1;
    cout << steps << endl;
    fo(i, 0, steps/2) {
        cout << 1 << " " << 2 << endl;
    }
    cout << 1 << " " << 3 << endl;
    fo(i, 0, steps/2) {
        cout << 2 << " " << 3 << endl;
    }
    return 0;
}

/*
321 0 0

*/