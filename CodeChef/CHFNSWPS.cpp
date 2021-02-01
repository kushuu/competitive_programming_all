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
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll N, ele, minUni = LLONG_MAX, ans = 0; cin >> N;
        unordered_map<ll, ll> cntKeepA, cntKeepB, cntKeep;
        bool possible = true;
        vll a, b; 
        for(ll i= 0; i < N; i++) {
            cin >> ele;
            minUni = min(minUni, ele);
            a.pb(ele); 
            cntKeepA[ele]++; 
            cntKeep[ele]++;
        }
        for(ll i= 0; i < N; i++) {
            cin >> ele; 
            minUni = min(minUni, ele);
            b.pb(ele); 
            cntKeepB[ele]++; 
            cntKeep[ele]++;
        }
        for(auto x : cntKeep) {
            if(x.second & 1) {
                possible = false;
                cout << -1 << endl;
                break;
            }
        }
        //cout << "here" << endl;
        if(possible) {
            unordered_map<ll, ll> digPerArr;
            for(auto x : cntKeep)
                digPerArr[x.first] = x.second/2;
            vll va, vb;
            //cout << "here" << endl;
            //correct till here now
            for(auto x : cntKeepA) {
                //cout << x.first << " " << x.second << " " << digPerArr[x.first] <<  endl;
                if(digPerArr[x.first] - x.second < 0) {
                    //cout << "here" << endl;
                    ll diff =  x.second - digPerArr[x.first];
                    while(diff--)
                        va.pb(x.first);
                    //cntKeepA[x.first] = LLONG_MAX; //so that wapas na add ho
                    //cout << "here" << endl;
                }
            }
            for(auto x : cntKeepB) {
                if(digPerArr[x.first] -x.second < 0) {
                    ll diff =  x.second - digPerArr[x.first];
                    while(diff--)
                        vb.pb(x.first);
                    //x.second = LLONG_MAX; //so that wapas na add ho
                }
            }
            if(va.empty()) {
                cout << 0 << endl;
                continue;
            }
            
            sort(va.begin(), va.end(), greater<>());
            sort(vb.begin(), vb.end());

            for(ll i = 0; i < va.size(); i++) {
                if( min(va[i], vb[i]) > minUni*2 )
                    ans += 2*minUni;
                else
                    ans += min(va[i], vb[i]);
            }

        cout << ans << endl;        
        }
    }
    return 0;
}