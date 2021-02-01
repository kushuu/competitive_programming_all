/**********************************************
Author: kushuu   File: alchemy.cpp    Time: Mon Jul 27 2020
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
    for(ll test = 1; test <= t; test++) {
        cout << "Case #" << test << ": ";
        ll n; cin >> n;
        string s; cin >> s;
        ll aCnt = 0, bCnt = 0;
        for(auto i : s)
            if(i == 'A')
                aCnt++;
            else
                bCnt++;
        
        if(abs(aCnt - bCnt) == 1)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
        
    }
    return 0;
}