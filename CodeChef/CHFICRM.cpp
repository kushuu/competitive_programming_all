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
        ll bhikhariLog[N];
        string ans = "YES";
        ll fiveCnt = 0, tenCnt = 0, fifteenCnt = 0;
        for(ll i = 0; i < N; i++) {
            cin >> bhikhariLog[i];
            if(bhikhariLog[i] == 5) fiveCnt++;
            
            else if(bhikhariLog[i] == 10)
                    if(fiveCnt < 1) {
                        tenCnt++;
                        ans = "NO";
                    }
                    else {
                        tenCnt++;
                        fiveCnt--;
                    }

            else 
                if(!tenCnt && fiveCnt < 2)
                    ans = "NO";
                else if(tenCnt >= 1)    tenCnt--;
                     else   fiveCnt-=2;
            cout << "5: " << fiveCnt << " 10: " << tenCnt << " ans: " << ans << endl;
        }

        cout << ans << endl;
    }
    return 0;
}