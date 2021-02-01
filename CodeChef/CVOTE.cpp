/**********************************************
Author: kushuu   File: CVOTE.cpp    Date: Mon Oct 12 2020
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
    map<string, string> main;
    string chef, country, ChefAns, CountryAns;
    ll maxCh = -1, maxCou = -1;
    ll n, m; cin >> n >> m;
    map<string, ll> chefmap, countrymap;

    while(n--) {
        cin >> chef >> country;
        main[chef] = country;
    }
    //for(auto i : main) cout << i.F << " " << i.S << endl;
    while(m--) {
        cin >> chef;
        chefmap[chef]++;
        countrymap[main[chef]]++;
        if(chefmap[chef] > maxCh) {
            ChefAns = chef;
            maxCh = chefmap[chef];
        }
        else if(chefmap[chef] == maxCh) {
            ChefAns = min(chef, ChefAns);
        }

        if(countrymap[main[chef]] > maxCou) {
            CountryAns = main[chef];
            maxCou = countrymap[main[chef]];
        }
        else if(countrymap[main[chef]] == maxCou) {
            CountryAns = min(main[chef] , CountryAns);
        }
    }
    cout << CountryAns << endl << ChefAns << endl;
    //for(auto i : chefmap) cout << i.F << " " << i.S << endl;
    //for(auto i : countrymap) cout << i.F << " " << i.S << endl;
    return 0;
}