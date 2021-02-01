#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main()
{
    fastIO;
    ll T;
    cin >> T;
    while (T--)
    {
        ll a, b, q, l, r;
        cin >> a >> b >> q;
        for(ll i = 0; i< q; i++)
        {
            ll cnt = 0;
            cin >> l >> r;
            for(ll x = l+1; x < r; x++)
            {
                if(x%a != x%b )
                {  
                    // cout << "vals: " << x << " ";
                    cnt++;
                }
            }
            if(cnt)
                cnt--;
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}