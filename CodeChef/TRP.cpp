/**********************************************
Author: kushuu   File: TRP.cpp    Date: Wed Oct 28 2020
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
    fastIO;
    ll n; cin >> n;
    ll rooms[n], scZero; 
    fo(i, n) {
        cin >> rooms[i];
        if(rooms[i] == 0)
            scZero = i;
    }
    ll C; cin >> C;
    ll checkRoom;
    bool found = false;
    fo(itr, n) {
        checkRoom = rooms[C];
        //cout << C << " " << checkRoom << " " << endl;
        if(checkRoom == 0) {
            found = true;
            break;
        }
        if(C+checkRoom > n-1) {
            C = abs(C-checkRoom);
            if(C > n-1) {
                found = false;
                break;
            }
        }
        else {
            C += checkRoom;
        }
    }
    if(found) cout << "true\n";
    else cout << "false\n";

    return 0;
}