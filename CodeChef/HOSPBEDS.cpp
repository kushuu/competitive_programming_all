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
        bool check = true;
        ll N, ele; cin >> N;
        vll ones;
        for(ll i = 0; i < N*N; i++) {
            cin >> ele;
            if(ele == 1)
                ones.push_back(i);
        }
        //cout << "beds pos: ";
        //for(auto i: ones)  cout << i << " ";
        //cout << endl;

        for(ll i = 0; i < ones.size(); i++)
        {
            if(ones[i]+1 == ones[i+1] || ones[i+1] == ones[i]+N) 
            {
                check = false;
                break;
            }
        }
        if(check)
            cout << "SAFE" << endl;
        else
            cout << "UNSAFE" << endl;
    }
    return 0;
}