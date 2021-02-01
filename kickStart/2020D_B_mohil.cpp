//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll qq = 1; qq <= t; qq++) {
        cout << "Case #" << qq << ": ";
        ll k; cin >> k;
        ll a[k]; for(ll i = 0; i < k; i++) cin >> a[i];
        ll fAns = 0;
        if(k < 5) cout << 0 << endl;
        else {
            ll ptr = 1; 
            while(ptr < k) {
                ll sz = 0;
                while(a[ptr] > a[ptr-1] || a[ptr] == a[ptr-1]) {
                    if(ptr >= k)
                        break;
                    if(a[ptr] == a[ptr-1])
                        ptr++;
                    else {
                        sz++;
                        ptr++;
                        if(sz > 3) {
                            sz = 0;
                            fAns++;
                        }
                    }
                }
                ll sz1 = 0;
                while(a[ptr] < a[ptr-1] || a[ptr] == a[ptr-1]) {
                    if(ptr >= k)
                        break;
                    if(a[ptr] == a[ptr-1])
                        ptr++;
                    else {
                        sz1++;
                        ptr++;
                        if(sz1 > 3) {
                            sz1 = 0;
                            fAns++;
                        }
                    }
                }
                // kya karu identical ka?
                while(ptr < k && a[ptr] == a[ptr-1])
                    ptr++;
            }
            cout << fAns << endl;
        }
    }
    return 0;
}