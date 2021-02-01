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
    while(T--)
    {
        ll n, m;
        cin >> n;
        ll A[n];
        for (ll i = 0; i < n; i++)
            cin >> A[i];
        cin >> m;
        ll B[m];
        set<ll> final;
        for (ll i = 0; i < m; i++)
        {
            cin >> B[i];
            final.insert(B[i]);
        }
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            bool isContinuous = true;
            if (final.find(A[i]) != final.end())  // if the element if not last in A
            {
                while (isContinuous)   //checks if the segment is continuous
                {
                    if (final.find(A[++i]) == final.end())  //if it the nest ele is last in A
                    {
                        count++;
                        isContinuous = false;  //the segment ends.
                        --i;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}