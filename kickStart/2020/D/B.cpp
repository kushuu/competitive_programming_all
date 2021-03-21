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
    for(ll test = 1; test <= t; test++) {
        ll K; cin >> K;
        int notes[K]; for(ll i = 0; i < K; i++) cin >> notes[i];
        int ans = 0, alienNote = 1; //1 = A , 2 = B , 3 = C , 4 = D.
        if(K <= 4) {
            cout << "Case #" << test << ": " << 0 << endl;
            continue;
        }
        for(ll i = 0; i < K; i++) {
            bool forward = true;
            if(notes[i] > notes[i+1])
                forward = false;
            if(forward) {
                ll pos = i+1, alienNote = 1;
                while(pos < K) {
                    if(notes[pos] > notes[pos-1])
                        alienNote++;
                    else if(notes[pos] < notes[pos-1])
                        alienNote = 0;
                    if(alienNote > 4) {
                        cout << pos<< " ";
                        ans++;
                        break;
                    }
                    pos++;
                }
                i = pos;
            }
            else {
                ll pos = i+1, alienNote = 1;
                while(pos < K) {
                        if(notes[pos] < notes[pos-1])
                            alienNote = 0;
                        else if(notes[pos] > notes[pos-1])
                            alienNote--;
                        if(alienNote < 1) {
                            ans++;
                            break;
                        }
                    pos++;
                }
                i = pos;
            }
        }
        cout << "Case #" << test << ": " << ans << endl;
    }
    return 0;
}