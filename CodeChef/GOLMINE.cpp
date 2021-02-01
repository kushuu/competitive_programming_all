#include <bits/stdc++.h>
//shorts
#define ll long long int
#define ld double
#define sll stack<long long int>
#define pb push_back
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll N; cin >> N;
        ld gA = 0, gB = 0;
        while(N--) {
            ld G, A, B; cin >> G >> A >> B;
            ld partA = G*B/(A+B);
            ld partB = G - partA;
            //cout << partA << " " << partB << endl;
            gA += partA;
            gB += partB;
        }
        cout<<fixed<<setprecision(8)<<gA<<" "<<gB<<endl;
    }
    return 0;
}