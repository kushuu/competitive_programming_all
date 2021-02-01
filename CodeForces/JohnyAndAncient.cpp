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

ll countSetBits(ll n) 
{ 
    ll count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    //cout << count << "  ";
    return count; 
} 

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll ans = 0;
        ll a, b;    cin >> a >> b;
        if(a == b) {
            cout << 0 << endl;
            continue;
        }
        if(countSetBits(a) != countSetBits(b)) {
            cout << -1 << endl;
            continue;
        }
        ll lastSetBitA = log2(a & -a)+1, lastSetBitB = log2(b & -b)+1;
        ll diff = abs(lastSetBitA - lastSetBitB);
        if(diff % 3 == 0) {
            ll check = min(a, b);
            for(int i = 0; i < diff/3; i++)
                check = check<<3;
            if(check == max(a,b))
                ans = diff/3;
            else 
                ans = -1;
        }
        else if(diff % 3 == 1) {
            ll check = min(a, b);
            for(int i = 0; i < (diff-1)/3; i++)
                check = check<<3;
            check = check<<1;
            if(check == max(a,b))
                ans = (diff - 1)/3 + 1;
            else ans = -1;
        }
        else if(diff % 3 == 2) {
                ll check = min(a, b);
                for(int i = 0; i < (diff-2)/3; i++)
                    check = check<<3;
                check = check<<2;
                if(check == max(a,b))
                    ans = (diff - 2)/3 + 1;
                else ans = -1;
            }   
        cout << ans << endl;
        }
    return 0;
}