#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define ld long double
#define pb push_back
#define mp make_pair
#define vpll vector<pair<long long int, long long int>>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

ll kya(ll num) {
    ll sum = 0;
    while(num) {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll N, cVal, mVal; cin >> N;
        ll c = 0, m = 0;
        while(N--) {
            cin >> cVal >> mVal;
            if(kya(cVal) > kya(mVal))
                c++;
            else if(kya(mVal) > kya(cVal))
                m++;
            else {
                c++; m++;
            }
        }

        if(c > m)
            cout << 0 << " " <<  c << endl;
        else if(m > c)
            cout << 1 << " " << m << endl;
        else
            cout << 2 << " " << m << endl;
    }
    return 0;
}