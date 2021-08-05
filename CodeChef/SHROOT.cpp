// Author: Sudeep Khandekar
// Email: sudeepkhandekar99@gmail.com
// g++ upload.cpp && ./a.out < in.txt > out.txt

#include<bits/stdc++.h>
using namespace std;
#define int128 __int128_t
#define ddl long double
#define ll long long
#define dd double
#define endl "\n"
#define tab "\t"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

int main() {
    ll t;   cin>>t;
    while(t--){
        ll n, m, counter = INT_MAX;    cin>>n >>m;
        vector<int> a(n), b(m), left(n, -1);
        REP(i, 0, n)    cin>>a[i];  REP(i, 0, m)    cin>>b[i];

        REP(i, 0, n)
        {
            ll val = left[i];
            if(a[i] == 1)
            {
                counter = 0;
                left[i] = counter;
            }
            else if(counter != INT_MAX)
            {
                counter++;
                left[i] = counter;
            }
        }

        counter = INT_MAX;

        for(ll i = n-1; i >= 0; i--)
        {
            ll val = left[i];
            if(a[i] == 2)
            {
                counter = 0;
                left[i] = min(val, counter);
            }
            else if(counter != INT_MAX)
            {
                counter++;
                left[i] = min(val, counter);
            }
        }

        left[0] = 0;

        REP(i, 0, m){
            if(b[i]-1 < n)  cout<<left[b[i]-1]<<" ";
            else cout<<-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}