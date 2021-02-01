/****************************************************************
Author: kushuu   File: temp.cpp    Date: Wed Jan 13 2021
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

int main() {
    int i, j, n = 4, rows, cols;
    cin >> rows >> cols;
     
    for(int row = 1; row <= rows; row++) {
        for(int i = 1; i <= n; i++) {
            for(int col = 1; col <= cols; col++) {
                for(int j = n-i+1; j >= 1; j--) cout << "*";
                for(int space = 1; space <= i-1; space++) cout << " ";
                for(int space = 1; space <= i-1; space++) cout << " ";
                for(int j = n-i+1; j >= 1; j--) cout << "*";
            }
            cout << endl;
        }
        for(int i = 1; i <= n; i++) {
            for(int col = 1; col <= cols; col++) {
                for(int j = 1; j <= i; j++) cout << "*";
                for(int space = n-i; space >= 1; space--) cout << " ";
                for(int space = n-i; space >= 1; space--) cout << " ";
                for(int j = 1; j <= i; j++) cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}