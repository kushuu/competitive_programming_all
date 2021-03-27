/****************************************************************
Author: kushuu   File: B.cpp    Date: Sat Mar 27 2021
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
    fo(test, 1, t+1) {
        cout << "Case #" << test << ": ";
        ll X, Y; string sequence;
        cin >> X >> Y >> sequence;
        // ll size = sequence.size(), firstval = -1, lastval = size, ans = 0;

        // fo(i, 0, size) if(sequence[i] != '?') {firstval = i; break;}
        // for(ll i = size-1; i >= 0; i--) if(sequence[i] != '?') {lastval = i; break;}

        // if(firstval == -1 or lastval == size) {
        //     cout << 0 << endl;
        //     continue;
        // }

        // while(firstval) sequence[--firstval] = sequence[firstval+1];
        // while(lastval < size) sequence[++lastval] = sequence[lastval-1];
        // fo(i, 0, size-1) {
        //     if(sequence[i] == '?') {
        //         if(sequence[i-1] == sequence[i+1]) sequence[i] = sequence[i-1];
        //         else if(sequence[i+1] == '?') sequence[i] = sequence[i-1];
        //         else {
        //             if(sequence[i-1] == 'C') {
        //                 ans += X;
        //                 sequence[i] = 'J';
        //             }
        //             else {
        //                 ans += Y;
        //                 sequence[i] = 'C';
        //             }
        //         }
        //     }
        //     else if(sequence[i] == 'C' and sequence[i+1] == 'J') ans += X;
        //     else if(sequence[i] == 'J' and sequence[i+1] == 'C') ans += Y;
        // }

        // cout << sequence << " " << ans << endl;

        ll ans = 0;
        string f = "";
        for(auto i : sequence) if(i != '?') f += i;
        ll size = f.size();
        fo(i, 0, size-1) {
            if(f[i] == 'C' and f[i+1] == 'J') ans += X;
            else if(f[i] == 'J' and f[i+1] == 'C') ans += Y;
        }
        cout << ans << endl;
    }
    return 0;
}