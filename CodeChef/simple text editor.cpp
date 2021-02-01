/**********************************************
Author: kushuu   File: simple text editor.cpp    Date: Mon Aug 17 2020
**********************************************/

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
#define fo(i,n) for(long long i = 0; i < n; i++)
#define easyfo(x, n) for(auto i : n)
#define MOD 1000000007
#define endl "\n"
#define F first
#define S second
#define s(a) a.size()

//program specific shorts (if any)
#define vs vector<string>

using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

int main() {
    fastIO;
    ll t;
    cin>>t;
    stack<string> StrStck;
    string st;
    while(t--){
        ll n; cin>>n;
        if(n == 1){
            string str;
            cin >> str;
            StrStck.push(st); 
            st += str;
        }
        else if(n ==2 ){
            ll k;   cin >> k;
            StrStck.push(st);
            st.erase(st.size()-k);
        }
        else if(n == 3){
            ll k;   cin >> k;
            cout << st[k-1] << endl; 
        }
        else{
            st = StrStck.top();  
            StrStck.pop();
        }
    }
    return 0;
}