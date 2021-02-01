#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll T;
    cin >> T;
    while(T--)
    {
        ll N, Q;
        cin >> N >> Q;
        ll pos = 0, steps = 0, S, D;
        for(ll i = 0; i < Q; i++)
        {
            cin >> S >> D;
            steps += abs(S-pos);
            steps += abs(D-S); 
            pos = D;
            // cout << "steps= " << steps << endl;
        }
        cout << steps << endl;
    }
}