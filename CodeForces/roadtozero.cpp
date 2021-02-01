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
        ll x, y, a , b;
        cin >> x >> y >> a >> b;
        ll valEql = abs(x-y) * a;
        ll toZero = min(x, y) * b;
        if (x*a + y*a < valEql + toZero)
            cout << x*a+y*a << endl;
        else
            cout << valEql + toZero << endl;
    }
    return 0;
}