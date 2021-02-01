#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll n;   cin >> n;
    string s;   cin >>s;
    ll count = 0;
    for(ll i = 0; i < s.size(); i++) {
        //cout << i << " ";
        if(s[i+1] == s[i]) {
            //i++;
            count++;
        }
    }
    //cout << endl;
    cout << count << endl;
    return 0;
}