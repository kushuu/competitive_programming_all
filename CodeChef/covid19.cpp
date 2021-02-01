#include <bits/stdc++.h>
//shorts
#define ll long long int
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
        ll N, count = 1;    cin >> N;
        ll numbers[N]; 
        vll patients;
        for(ll i = 0; i < N; i++)   cin >> numbers[i];
        for(ll i = 0; i < N; i++)
        {
            if(abs(numbers[i+1] - numbers[i]) <= 2)
                count++;
            else {
                patients.push_back(count);
                count = 1;
            }
        }
        //cout << endl;
        //for(auto i: patients) cout << i << " ";
        //cout << endl;
        cout << *min_element(patients.begin(), patients.end()) << " " << *max_element(patients.begin(), patients.end()) << endl;
    }
    return 0;
} 