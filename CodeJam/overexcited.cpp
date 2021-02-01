#include <bits/stdc++.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll T; cin >> T;
    for(ll test = 1; test <= T; test++) {
        ll X, Y;
        string path;
        cin >> X >> Y >> path;
        //ll checkX = X, checkY = Y;
        for(ll i = 0; i < path.size(); i++)
        {
            if(path[i] == 'N')
                Y++;
            else if(path[i] == 'S')
                Y--;
            else if(path[i] == 'E')
                X++;
            else
                X--;
        }
        
        ll time = abs(X)+abs(Y);
        for(ll i = abs(X)+abs(Y);i < path.size(); i++)
            time++;

        cout << "Case #" << test << ": ";
        if( path.size() < (abs(X) + abs(Y)) )
            cout << "IMPOSSIBLE" << endl;
        else {
            if(X == 0 && Y == 0)
                cout << path.size() << endl;
            else {
                if(path.size() == (abs(X)+abs(Y)))
                    cout << abs(X)+abs(Y) << endl;
                else
                    cout << path.size() - (abs(X)+abs(Y)) << endl;
                //cout << time << endl;
            }
                
        }
    }
    return 0;
}