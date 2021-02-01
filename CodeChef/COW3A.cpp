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
    ll T;
    cin >> T;
    while (T--)
    {
        ll a, b, c, d;
        cin >> a >>b >> c >> d;
        ll A, M, O;
        A = (a+c-b)/2;
        M = (a+b-c)/2;
        O = (b+c-a)/2;
        cout << A << " " << M << " " << O << " " <<endl; 
    }
    return 0;
}