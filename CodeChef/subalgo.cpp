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
    ll n, a; cin >> n >> a;
    while(a-- && n) {
        if(n%10 == 0)
            n/= 10;
        else {
            n--;
        }
        //cout << n << "  ";
    }
    cout << n << endl;
    
    return 0;
}