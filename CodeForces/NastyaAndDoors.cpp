#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

bool isaPeak(ll index, vector<ll> ref)
{
    for(ll i = 0; i < ref.size(); i++)
        if(index == ref[i])
            return true;
    
    return false;
}

int main()
{
    fastIO;
    ll T;
    cin >> T;
    while (T--)
    {
        ll maxPeaks = 0, N, K; 
        cin >> N >> K;
        ll mountains[N];
        vector<ll> peaks, peaksPerPart;
        for(ll i = 0; i < N; i++)
            cin >> mountains[i];

        for(ll i = 1; i < N-1; i++)
            if(mountains[i] > mountains[i-1] && mountains[i] > mountains[i+1])
                peaks.push_back(i);   // STORES THE INDEXES OF PEAKS IN THE RANGE GIVEN.
        
        for(ll i = 0; i < N-K; i++)
        {
            ll peaksCount = 0;
            for (ll j = i + 1; j <= i + K - 2; j++) 
            {
                if (isaPeak(mountains[j], peaks))
                {
                    peaksCount++;
                }
            }
            peaksPerPart.push_back(peaksCount);
        }
        cout << "peeksPerPrt: ";
        for(auto i : peaksPerPart)
            cout << i << " ";
        cout << endl;
        ll maxEle = *max_element(peaksPerPart.begin(), peaksPerPart.end());
        ll index = *find(peaksPerPart.begin(), peaksPerPart.end(), maxEle);
        cout << maxEle+1 << " " << index << endl;
    }
    return 0;
}       