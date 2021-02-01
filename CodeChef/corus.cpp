#include <bits/stdc++.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        map<char, ll>::iterator itr;
        ll Q, C, N; 
        cin >> N >> Q;
        string s;
        cin >> s;
        map<char, ll> alphaCount;
        for(ll i = 0; i < N; i++)
        {
            if( alphaCount.find(s[i]) == alphaCount.end() ) {
                alphaCount.insert(pair<char, ll>(s[i], 0));
                alphaCount[s[i]]++;
            } 
            else
                alphaCount[s[i]]++;            
        }
        while(Q--)
        {
            cin >> C;
            ll count = 0;
            for(itr = alphaCount.begin(); itr != alphaCount.end(); itr++) {
                if(itr->second > C)
                    count += itr->second-1;
            }
            cout << count << endl;
        }

    }
    return 0;
}