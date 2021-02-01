#include <bits/stdc++.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

vll remIdx(vll numbers, ll idx)
{
    vll ret;
    for(ll i = 0; i < numbers.size(); i++)
        if(i != idx)
            ret.push_back(numbers[i]);
    
    return ret;
}

int main()
{
    fastIO;
    ll N, ele;  
    cin >> N;
    vll numbers;
    vll finals;
    for(ll i = 0; i < N; i++) {
        cin >> ele;
        numbers.push_back(ele);
    }
    for(ll i = 0; i < N; i++)
    {
        ll count = 1;
        for(ll j = 0; j < N; j++)
        {
            if(i != j && numbers[i] == numbers[j] && numbers[j] >= 0 && numbers[i] >= 0) {
                count++;
                numbers = remIdx(numbers, j); 
            }
            finals.push_back(numbers[i] + count);
        }
    }
    for(ll i = 0; i < finals.size(); i++)
    {
        cout << finals[i] << " ";
    }
    return 0;
}