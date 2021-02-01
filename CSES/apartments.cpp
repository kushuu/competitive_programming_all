/**********************************************
Author: kushuu   File: apartments.cpp    Date: Mon Aug 24 2020
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
//
using namespace std;

ll getlcm(ll a, ll b) {
    return (a*b)/__gcd(a, b);
}

int main() {
    fastIO;
    /* approach 1 - brute force - TLE.
    ll n, m, k, ele; cin >> n >> m >> k;
    vll A, B;
    fo(i, n) {cin >> ele; A.pb(ele);}
    fo(i, m) {cin >> ele; B.pb(ele);}

    ll ans = 0;
    fo(i, n) {
        fo(j, s(B)) {
            if(abs(A[i] - B[j]) <= k) {
                ans++;
                B.erase(B.begin() + j);
            }
        }
    }
    cout << ans;
    */
    
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    } 
    sort(a,a+n);
    ll aa;
    multiset<ll> s;
    for(ll i=0;i<m;i++){
        cin>>aa;
        s.insert(aa);
    }

    for(ll i=0;i<n;i++){
        ll val=a[i]-k;
        auto it = s.lower_bound(val);
        if(it!=s.end() and *it<= a[i]+k){
            s.erase(it);
            ans++;
        }

    }
    cout<<ans<<endl;
    return 0;
}