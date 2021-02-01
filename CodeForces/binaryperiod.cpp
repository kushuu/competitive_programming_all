#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

ll retPer(string s)
{
    ll idx = 0;
    int fristChar = s[0]?1:0;
    bool visitedOpp = false;
    for(ll i = 1; i < s.length(); i++)
    {
        if(s[i] == !fristChar)
        {
            visitedOpp = true;
        }
        if(s[i] == fristChar && visitedOpp)
            return idx;
        idx++;
        
    }
    if (idx == s.length())
        return idx;
}

int main()
{
    fastIO;
    ll T;
    cin >> T;
    while (T--)
    {
        string check;
        cin >> check;
        cout << retPer(check);
    }
    return 0;
}