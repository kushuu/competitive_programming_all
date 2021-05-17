/****************************************************************
Author: kushuu   File: TCTCTOE.cpp    Date: Sun May 09 2021
****************************************************************/

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
#define fo(i,x,y) for(long long i = x; i < y; i++)
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

bool won(char board[][3], char player) {
    bool win = 0;
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] and board[i][1] == board[i][2] and board[i][0] == player) win = true;
    }
    for(int i = 0; i < 3; i++) {
        if(board[0][i] == board[1][i] and board[1][i] == board[2][i] and board[0][i] == player) win = true;
    }
    if(board[0][0] == board[1][1] and board[1][1] == board[2][2] and board[0][0] == player) win = true;
    if(board[0][2] == board[1][1] and board[1][1] == board[2][0] and board[0][2] == player) win = true;
    return win;
}

int main() {
    fastIO;
    ll t; cin >> t;
    while(t--) {
        char board[3][3];
        int xCnt = 0, oCnt = 0, freePos = 0;
        for(int i = 0; i < 3; i++) 
            for(int j = 0; j < 3; j++) {
                cin >> board[i][j];
                if(board[i][j] == '_') freePos++;
                else if(board[i][j] == 'X') xCnt++;
                else oCnt++;
            }   
        // cout << won(board, 'X') << " " << won(board, 'O') << "\t";
        // cout << xCnt << " " << oCnt << " "; 
        bool wonX = won(board, 'X'), wonO = won(board, 'O');
        if((wonX and wonO) or (xCnt < oCnt) or (xCnt > oCnt+1)) {
            cout << 3 << endl;
            // continue;
        }
        else if(!xCnt and !oCnt and freePos == 9) {
            cout << 2 << endl;
            // continue;
        }
        else if(wonX and !wonO and xCnt == oCnt+1)
            cout << 1 << endl;
        else if(!wonO and !wonX and !freePos)
            cout << 1 << endl;
        else if(!wonX and wonO and xCnt == oCnt)
            cout << 1 << endl;
        else if(!wonX and !wonO and freePos)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}

/*
!(xcnt == 5 and ocnt == 4)
X O X O X O ....
9 total - odd_number = even_number. draw/win
*/