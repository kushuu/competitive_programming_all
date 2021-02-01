#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    IOS;
    int T;
    cin >> T;
    for (int test = 1; test <= T; test++)
    {
        ll N, D, ans;
        cin >> N >> D;
        ll buses[N];
        for(ll i = 0; i < N; i++)
            cin >> buses[i];
        ll i = N-1;
        for(ll day = D; i != -1; day--)
        {
            if(day%buses[i] == 0)
            {
                day++;
                i--;
                ans = day-1;
            }           
        }
        cout << "Case #" << test << ": " << ans << endl;
    }
}  