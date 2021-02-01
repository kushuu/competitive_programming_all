#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

ll powmod(ll A, ll B, ll C)
{
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;

    ll y;
    if (B % 2 == 0)
    {
        y = powmod(A, B / 2, C);
        y = (y * y) % C;
    }

    else
    {
        y = A % C;
        y = (y * powmod(A, B - 1, C) % C) % C;
    }

    return (ll)((y + C) % C);
}

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N, A;
        cin >> N >> A;
        ll individualEle = A, prod = 1, sum = 0;
        for (ll i = 1; i <= N; i++)
        {
            prod = powmod(individualEle, (2 * i - 1), mod);
            individualEle *= prod;
            sum += (prod % mod);
        }
        cout << sum % mod << endl;
    }
}