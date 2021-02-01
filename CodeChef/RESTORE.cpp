/*
Author : Kushagra Soni
Created On: 13 November 2020, 01:13
*/

#include <bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// program specific shorts (if any)
const ll mod = 1000000007;
const ll maxN = 4000000;

using namespace std;

vll primes;

// i attribute this code to gfg Sieve of Eratosthenes : https://www.geeksforgeeks.org/sieve-of-eratosthenes/

void SieveOfEratosthenes() { 
    bool prime[maxN+1]; 
    primes.pb(1); // to support 1 based indexing
    memset(prime, true, sizeof(prime)); 
    for(int p = 2; p*p <= maxN; p++) { 
        if(prime[p] == true) { 
            for (int i= p * p; i <= maxN; i+=p) 
                prime[i] = false; 
        } 
    } 
    for(int p = 2; p <= maxN; p++) 
        if (prime[p]) 
            primes.pb(p);
} 
// attribution ends here

int main() {
    fastIO;
    ll t; cin >> t;
    SieveOfEratosthenes();
    for(ll qq = 0; qq < t; qq++) {
        ll n; cin >> n;
        vll b(n+1); for(ll i = 1; i <= n; i++) cin >> b[i];
        vll ans(n+1);
        // for(auto i : primes) cout << i << " " ;  cout << endl;
        for(ll i = 1; i <= n; i++) ans[i] = primes[i];
        for(ll i = 1; i <= n; i++)
            ans[i] = primes[b[i]];
        for(ll i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}