#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
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
        bool cntCheck = true;        
        ll ing[N];
        string ans;
        bool flag = false;
        bool uniqueCheck = true;
        set<ll> saaman;
        sll check;
        for(ll i = 0; i < N; i++) {
            cin >> ing[i];
            check.push(ing[i]);
            saaman.insert(ing[i]);
            //cout << check.top() << " ";
            for (auto it=saaman.begin(); it != saaman.end(); ++it)  cout  << *it << ' '; 
            cout << endl;
            if(saaman.find(ing[i]) != saaman.end() && ing[i] != ing[i-1] && i != 0)
            {cout << "NO" << endl;
            uniqueCheck = false;
            break;}

        }
        set<ll> cntVal;
        if(uniqueCheck) {
            cout << "set check passed" << endl;
            for(ll i = 0; i < N; i++) {
                ll pos;
                ll check = ing[i];
                ll cnt = 0;
                for(ll j = 0; j < N; j++) {
                    if(ing[j] == check)
                        cnt++;
                    else {
                        pos = j+1;
                        break;
                    }
                }
                i = pos;
                cntVal.insert(cnt);
                if(cntVal.find(cnt) != cntVal.end()) {
                    cout << "NO" << endl;
                    uniqueCheck = false;
                    break;
                }
            }
        }

        if(cntCheck)
            cout << "YES" << endl;
    }
    return 0;
}