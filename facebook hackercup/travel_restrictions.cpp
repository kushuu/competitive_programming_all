/**********************************************
Author: kushuu   File: travel_restrictions.cpp    Time: Fri Jul 24 2020
**********************************************/

#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define um unordered_map
#define ld long double
#define pb push_back
#define mp make_pair
#define vpll vector<pair<long long int, long long int>>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll t; cin >> t;
    for(int test = 1; test <= t; test++) {
        ll n; cin >> n;
        char ans[n][n];
        string I, O; cin >> I >> O;
        for(ll i = 0; i < n; i++)
            for(ll j = 0; j < n; j++)
                if(i == j)
                    ans[i][j] = 'Y';
                else if(abs(i-j) == 1)
                {
                    if(O[i] == 'Y') {
                        if(I[j] == 'Y')
                            ans[i][j] = 'Y';
                        else
                            ans[i][j] = 'N';
                    }
                    else
                        ans[i][j] = 'N';
                }
                else if(O[i] == 'Y') {
                    // for transitive cases
                    if(i < j) {
                        ll start = i, end = j;
                        bool pos = true;
                        for(ll cur = start+1; cur < end; cur++) {
                            if(I[cur] == 'Y' && O[cur] == 'Y') {
                                if(I[cur+1] != 'Y') {
                                    pos = false;
                                    break;
                                }
                            }
                            else {
                                pos = false;
                                break;
                            }
                        }
                        //cout << start << " " << end << " " << pos << endl;
                        if(pos)
                            ans[i][j] = 'Y';
                        else
                            ans[i][j] = 'N';
                    }
                    else {
                        ll start = i, end = j;
                        bool pos = true;
                        for(ll cur = start-1; cur > end; cur--) {
                            if(I[cur] == 'Y' && O[cur] == 'Y') {
                                if(I[cur-1] != 'Y') {
                                    pos = false;
                                    break;
                                }
                            }
                            else {    
                                pos = false;
                                break;
                            }
                        }
                        //cout << i << " " << j << " " << pos << endl;
                        if(pos)
                            ans[i][j] = 'Y';
                        else
                            ans[i][j] = 'N';
                    }
                }
                else
                    ans[i][j] = 'N';
        
        cout << "Case #" << test << ":\n";
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n; j++)
                cout << ans[i][j];
            cout << endl;
        }
    }
    return 0;
}