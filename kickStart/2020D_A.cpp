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
    for(int test = 1; test <= t; test++) {
        ll N; cin >> N;
        ll days[N];
        for(ll i = 0; i < N; i++)
            cin >> days[i];
        
        ll tempMax = LLONG_MIN, ans = 0;
        for(ll i = 0; i < N-1; i++) {
            if(days[i] == max(days[i], tempMax) && days[i] > days[i+1] && tempMax != days[i]) 
                ans++;
            tempMax = max(tempMax, days[i]);
        }
        ll maxEle = *max_element(days, days+N);
        if(tempMax != days[N-1] && max(days[N-1], tempMax) == days[N-1])
            ans++;
        
        cout << "Case #" << test << ": " << ans << endl;
    }
    return 0;
}