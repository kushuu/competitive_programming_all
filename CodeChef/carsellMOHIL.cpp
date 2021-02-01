#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
#define vll vector<long long int>
#define mod 1000000007
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fastIO;
    ll t;
    cin >> t;
    for (ll q = 0; q < t; q++)
    {
        ll n;
        cin >> n;
        vll p;
        ll ele, sum = 0, x = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele != 0)
            {
                p.push_back(ele);
                x++;
            }
        }
        sort(p.begin(), p.end());
        for (ll i = 0; i < x; i++)
        {
            p[i] -= i;
            if (p[i] > 0)
            {
                sum += p[i] % mod;
            }
        }
        cout << sum % mod << endl;
    }
}