//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
using namespace std;
//program specific shorts (if any)


int main() {
    fastIO;
    ll a, b, l, r;
    cin >> a >> b >> l >> r;
    ll maxi = -1, maxo = -1;
    for(ll i = l; i <= r; i++) {
        ll c = a & i, d = b & i, e = a | b;
        if(c*d > maxi) {
            maxi = c*d;
            maxo = i;
        }
    }
    cout << "a \t\t" << bitset<16>(a).to_string() << " " << a << endl;
    cout << "b \t\t" << bitset<16>(b).to_string() << " " << b << endl;
    cout << "l \t\t" << bitset<16>(l).to_string() << " " << l << endl;
    cout << "r \t\t" << bitset<16>(r).to_string() << " " << r << endl;
    ll ans1 = max(a,b) & r;
    ll ans2 = a|b;
    ll ans3 = (a|b)&r;
    ll ans5 = a&b;
    ll ans6= ans2&l;
    //cout << "a&b  \t\t" << bitset<16>(ans5).to_string() << " " << ans5 << endl;
    cout << "a|b  \t\t" << bitset<16>(a | b).to_string() << " " << ans2 << endl; 
    cout << "(a|b)&r \t" << bitset<16>((a|b) & r) << " " << ans3 << endl;
    //cout << "(a|b)&l \t" << bitset<16>((a|b) & l) << " " << ans6 << endl;
    ll ans4 = ((a|b)^((a|b)&r));
    cout << "(a|b)^((a|b)&r)\t" << bitset<16>(((a|b)^((a|b)&r))) << " " << ans4 << endl;
    cout << "\n";
    cout << "maxo \t\t" << bitset<16>(maxo).to_string() << " " << maxo << endl;
    return 0;
}