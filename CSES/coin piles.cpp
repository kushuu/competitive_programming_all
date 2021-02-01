/**********************************************
Author: kushuu   File: coin piles.cpp    Time: Tue Aug 04 2020
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
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        if(a == 0 && b == 0) cout << "YES\n";

        else if((a != 0 && b == 0) || (a == 0 && b != 0))
            cout << "NO\n";

        else if((a+b)%3 == 0 && (a <= b*2 && b <= a*2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

/*
12 9
10 8
8 7
6 6
4 5
3 3
2 1
1 2
0 0
*/