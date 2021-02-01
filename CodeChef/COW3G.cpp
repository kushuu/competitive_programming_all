#include <bits/stdc++.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main()
{
    fastIO;
    ll N, LCM, maxLCM = 0;
    cin >> N;
    vll arr;
    for(ll i = 0; i < N; i++)   cin >> arr[i];
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    for(ll i = 0; i < N; i++)
    {
        for(ll j = i+1; j < N; j++)
        {
            LCM = arr[i]*arr[j]/__gcd(arr[i], arr[j]);
            if (LCM > maxLCM && arr[i]*arr[j] < maxLCM)
                maxLCM = LCM;
        }
    }
    cout << maxLCM << endl;
    return 0;
}