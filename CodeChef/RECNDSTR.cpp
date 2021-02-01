#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
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
        string str;
        cin >> str;
        bool check = true;
        char first = str[0], second = str[1];
        for(ll i = 2; i < str.size(); i++)
        {
            if (first == second)
            {
                if(str[i] != first)
                    check = false;
            }
            else
            {
                if((i%2 == 0 && str[i] != first) || (i%2 != 0 && str[i] != second) || (str.size()%2 != 0))
                    check = false;
            }
            
        }
        if(check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}