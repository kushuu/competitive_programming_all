#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

bool check(ll N)
{
    return ((N/2) %2 == 0);
}

int main()
{
    fastIO;
    ll T;
    cin >> T;
    while (T--)
    {
        ll N, evenSum = 0, oddSum = 0;
        cin >> N;
        if(!check(N))   // checks if its half is not even. 
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for(ll i = 1; i <= N/2; i++) {
                cout << 2*i << " ";
                evenSum += 2*i;
            }
            // cout << evenSum << endl;

            for(ll i = 1; i < N/2; i++) {
                cout << 2*i - 1 << " ";
                oddSum += 2*i -1;
            }
            cout << evenSum - oddSum ;
            cout << endl;
        }
        
    }
    return 0;
}