/********************************
Author: kushuu
Time: Sun Jul 19 2020
File: LEADGAME.cpp
********************************/

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
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()
#define MOD 1000000007

//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    ll max_lead = LLONG_MIN, p1Sc = 0, p2Sc = 0, p1, p2, player;
    while(t--) {
        cin >> p1 >> p2;
        p1Sc += p1, p2Sc += p2;
        ll diff = abs(p1Sc-p2Sc);
        if(diff > max_lead) {
            max_lead = diff;
            player = (p1Sc > p2Sc)? 1: 2;
        }
        //cout << diff << " ";
    }
    cout << player << " " << max_lead << endl;
    return 0;
}