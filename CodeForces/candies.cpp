#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

bool intCheck(ll k, ll n)
{
    long double exp = n / (pow(2, k) -1);
    // cout << "exp: " << exp << endl;
    return (exp - (ll)exp == 0);
}

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) 
    {
        ll n, checkedK, ans;
        cin >> n;
        for (ll k = 2; k < 10000; k++)
        {
            checkedK = intCheck(k, n);
            if (checkedK)
            {
                ans = n / (pow(2, k) - 1);
                // cout << k << " ";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}