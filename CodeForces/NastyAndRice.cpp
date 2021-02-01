#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
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
        ll N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;
        ll lowerWght = abs(B-A), upperWght = A+B;
        ll lowerCheck = abs(D-C), upperCheck = D+C;
        if ((lowerWght * N >= lowerCheck && lowerWght * N <= upperCheck) || (upperWght * N >= lowerCheck && lowerWght * N <= upperCheck))
            cout << "YES" << endl;
        else if (upperWght * N < lowerCheck )
            cout << "NO" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
} 