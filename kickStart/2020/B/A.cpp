#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    IOS;
    int T;
    cin >> T;
    for(int test = 0; test < T; test++)
    {
        ll N, count = 0;
        cin >> N;
        int hills[N];
        for(int i = 0; i < N; i++)
            cin >> hills[i];
        
        for(int i = 1; i < N-1; i++)
            if(hills[i] > hills[i-1] && hills[i] > hills[i+1])
                count++;
        
        cout << "Case #" << test+1 << ": " << count << endl;
    }
}