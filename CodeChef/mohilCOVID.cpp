#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
#define INT_BITS sizeof(int) * 8
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n, ele, flag = 0;
        cin >> n;
        vector<ll> ones;
        for (ll x = 0; x < n; x++)
        {
            cin >> ele;
            if (ele == 1)
                ones.push_back(x);
        }
        for (ll x = 0; x < ones.size() - 1; x++)
        {
            if (ones[x + 1] - ones[x] < 6)
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
    }
    return 0;
}