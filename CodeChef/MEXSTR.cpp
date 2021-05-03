/****************************************************************
Author: kushuu   File: MEXSTR.cpp    Date: Sun Apr 04 2021
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

string bin(ll num) {
    string s = bitset<32> (num).to_string();
    size_t loc1 = s.find('1');
    if(loc1 != string::npos) return s.substr(loc1);
    return "0";
}

bool issubseq(string sub, string sup) {
    ll subidx = 0, sublen = sub.size(), suplen = sup.size();
    for (ll supidx = 0; supidx < suplen && subidx < sublen; supidx++)
        if (sub[subidx] == sup[supidx])
            subidx++;
    return (subidx == sublen);
}

int main() {
    fastIO;
    ll t; cin >> t;
    fo(test, 0, 101) {
        string num; cin >> num;
        num = bin(test);
        unordered_set<string> all_sub;
        ll check = 0;
        while(1) {
            string tempbin = bin(check);
            if(!issubseq(tempbin, num)) {
                cout << test << " " << bin(test) << " " << tempbin << endl;
                break;
            }
            check++;
        }
    }
    return 0;
}