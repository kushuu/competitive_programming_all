#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> del1(vector<ll> P)
{
    for(ll i = 0; i < P.size(); i++)
        if (P[i] > 0)
            P[i]--;
    
    return P;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  // ye bhi karke dekh liya TLE hatane ke liye
    int T;
    cin >> T;
    while(T--)
    {
        ll N, ele, profit = 0;
        cin >> N;
        ll last = N-1;
        vector<ll> P;
        for(ll i = 0; i < N; i++) {
            cin >> ele;
            P.push_back(ele);
        }

        sort(P.begin(), P.end());

        for(ll itr = 0; itr < N; itr++)
        {
            profit+=P[last]-1;
            P = del1(P);
            last--;
        }
        
        cout << profit%1000000007 << endl;
    }
}
