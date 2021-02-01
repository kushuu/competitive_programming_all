#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

bool signcheck(ll n)
{
    return (n > 0? true: false);
}

int main()
{
    fastIO;
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        ll arr[N];
        for(ll i = 0; i < N; i++)
            cin >> arr[i];

        vector<ll> finalVec;
        for (ll i = 0; i < N; i++)
        {
            if (arr[i] > 0)
            {
                vector<ll> positives;
                positives.push_back(arr[i]);
                while (true)
                {
                    if (arr[++i] > 0 && i < N)
                        positives.push_back(arr[i]);
                    else
                    {
                        i--;
                        break;
                    }
                }
                finalVec.push_back(*max_element(positives.begin(), positives.end()));
            }
            else if (arr[i] < 0)
            {
                vector<ll> negatives;
                negatives.push_back(arr[i]);
                while (true)
                {
                    if (arr[++i] < 0 && i < N)
                        negatives.push_back(arr[i]);
                    else
                    {
                        i--;
                        break;
                    }
                }
                finalVec.push_back(*max_element(negatives.begin(), negatives.end()));
            }
        }
        //cout << accumulate(finalVec.begin(), finalVec.end(), 0) << endl;
        ll sum = 0;
        for (ll i = 0; i < finalVec.size(); i++)
        {
            sum += finalVec[i];
        }
        cout << sum << endl;
    }
    return 0;
}