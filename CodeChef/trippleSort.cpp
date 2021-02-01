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
        ll N;   cin >> N;
        if(N%2 == 0 && N%4 != 0)    cout << -1 << endl;
        else
        {
            ll P[N];
            for(ll i = 0; i < N; i++)   P[i] = N-i;
            ll M = N/2;
            cout << M << endl;
            ll temp, x1, x2, x3;  // 3 numbers to be operated on.
            for(ll i = 0; i < M; i++)
            {   
                temp = P[0];
                P[0] = P[N-1]; P[N-1] = P[N-2];
                P[N-2] = temp;
            }
        }      
    }
    return 0;
}