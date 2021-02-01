#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define ld long double
#define pb push_back
#define mp make_pair
#define vpll vector<pair<long long int, long long int>>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        ll K, cnt = 1; cin >> K;
        char board[8][8];
        
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(cnt <= K)
                    board[i][j] = '.';   
                else
                    board[i][j] = 'X';  
                cnt++;
            }
        }
        board[0][0] = 'O';
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++)
                cout << board[i][j];
            cout << endl;
        }
    }
    return 0;
}