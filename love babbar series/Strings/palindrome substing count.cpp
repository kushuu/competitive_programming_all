/****************************************************************
Author: kushuu   File: palindrome substing count.cpp    Date: Tue Nov 10 2020
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
    fastIO;
    ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int size = s.size();
        int matrix[size][size];
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(i == j) matrix[i][j] = 1;
                else matrix[i][j] = 0;
            }
        }

        int ans = size;
        for(int i = size-1; i >= 0; i--) {
            for(int j = i+1; j < size; j++) {
                if(j == i+1 && s[i] == s[j]) {
                    matrix[i][j] = 1;
                    ans++;
                }
                if(matrix[i+1][j-1] == 1 && s[i] == s[j]) {
                    matrix[i][j] = 1;
                    ans++;
                }
            }
        }
        for(int i = 0; i < size; i++) { 
            for(int j = 0; j < size; j++)
                cout << matrix[i][j] << " " ;
            cout << endl;
        } 
        cout << ans << endl;
    }
    return 0;
}