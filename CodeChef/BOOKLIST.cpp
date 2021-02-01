/********************************
Author: kushuu
Time: Sun Jul 19 2020
File: BOOKLIST.cpp
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
    ll M, ele; cin >> M;
    vll books; for(ll i = 0; i < M; i++) {cin >> ele; books.pb(ele);}
    //cout << "here\n";
    ll N; cin >> N;
    vll rem; for(ll i = 0; i < N; i++) {cin >> ele; rem.pb(ele);}
    //cout << "here\n";
    //for(auto i : books) cout << i << " " ; cout << endl;
    //for(auto i : rem) cout << i << " " ; cout << endl;
    
    for(auto i : rem) {
        cout << books[i-1] << endl;
        books.erase(books.begin() + i-1);
    }
    return 0;
}