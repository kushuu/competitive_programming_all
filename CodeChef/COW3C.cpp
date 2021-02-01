#include <bits/stdc++.h>
//shorts
#define ll long long int
#define vll vector<long long int>
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
    ll N;   cin >> N;
    ll b, d, counts = 0;
    for(ll i = 0; i < N; i++)
    {
        cin >> b >> d;
        counts += d-b+1;
    }
    cout << counts;
    return 0;
}