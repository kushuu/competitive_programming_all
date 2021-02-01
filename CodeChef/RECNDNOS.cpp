#include <bits/stdc++.h>
//shorts
#define ll long long int
#define vll vector<ll>
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
    while (T--)
    {
        ll N, ele; cin >> N;
        vll plates;
        for(ll i = 0; i < N; i++)
        {
            cin >> ele;
            plates.push_back(ele);
        }
        ll maxEl = *max_element(plates.begin(), plates.end());   // like 4 in the third test case of CC
        ll counts[maxEl+1];
        for(ll i = 0; i < maxEl+1; i++)
            counts[i] = 0;
        for(ll i = 0; i < N; i++)
        {
            if(plates[i+1] == plates[i])
            {
                counts[plates[i]]++;
                i++;
            }
            else
                counts[plates[i]]++;
                            
        }
        cout << max_element(counts, counts+maxEl+1)-counts<<endl;
    }
    return 0;
}