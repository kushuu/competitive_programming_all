#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll T;
    cin >> T;
    while(T--) {
        ll n, m, x, y;  cin >> n >> m >> x >> y;
        ll cost = 0;
        char pavement[n][m];
        for(ll i = 0; i < n; i++)
            for(ll j = 0; j < m; j++) {
                cin >> pavement[i][j];
            }
        
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                if(j != m-1 && ( pavement[i][j] == '.' && pavement[i][j+1] == '.')) {
                        if(2*x < y ) {
                            //cout << "first ";
                            cost += 2*x;
                            //cout << cost <<" " << i << " " << j << endl;
                        }
                        else {
                            //cout << "sec ";
                            cost += y;
                            //cout << cost <<" " << i << " " << j << endl;
                        }
                    j++;
                    }
                else if(pavement[i][j] == '.') {
                    //cout << "thir ";
                    cost += x;
                    //cout << cost <<" " << i << " " << j << endl;
                }
                }
        }        
        cout << cost << endl;

    }
}