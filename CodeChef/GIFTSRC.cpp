#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    string S;
    cin>>T;
    for (int tc = 0 ; tc < T ; tc++ ) {
        int x = 0, y = 0;
        cin>>N;
        cin>>S;
        for(int ch = 0 ; ch < S.length() ; ch++ ) {
            if (ch == 0)
                if (S[ch] == 'L')
                    x--;
                else if ( S[ch] == 'R')
                    x++;
                else if (S[ch] == 'U')
                    y++;
                else
                    y--;
            else {
                if (S[ch] == 'L' && (S[ch-1] != 'L' && S[ch-1] != 'R'))
                    x--;
                else if( S[ch] == 'R' && (S[ch-1] != 'L' && S[ch-1] != 'R'))
                    x++;
                else if ( S[ch] == 'U' && (S[ch-1] != 'U' && S[ch-1] != 'D'))
                    y++;
                else if (S[ch] == 'D' && (S[ch-1] != 'U' && S[ch-1] != 'D'))
                    y--;
            }
        }

        
    cout<<x<<" "<<y;
    }
}