/****************************************************************
Author: kushuu   File: ISS.cpp    Date: Tue May 11 2021
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
    ll t; cin >> t;
    while(t--) {
        ll k; cin >> k;
        ll ans = 0;
        fo(i, 1, 2*k+1) {
            ans += __gcd(k+i*i, k+(i+1)*(i+1));
        }
        cout << ans << endl;
    }
    return 0;
}

/*
6   6
14  7
18  6
24  6
42  ?   *8+2
44  ?   *7+2
42  6
68  ?   *8+4
54  6
60  6
116 ?   *10+6
90  ?   *7+6
78  6
120 ?   *8+8
90  6
144 9
146 ?   *8+10
108 6
174 ?   *9+16
188 ?   *9+8
*/