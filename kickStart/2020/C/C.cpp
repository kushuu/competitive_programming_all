#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll T; cin >> T;
    for(ll test = 1; test <= T; test++) {
        ll N;   cin >> N;
        ll numbers[N];
        for(ll i = 0; i < N; i++)   cin >> numbers[i];

        ll sum = 0, count = 0, temp;
        for(ll i = 0; i < N; i++) {
            sum += numbers[i];
            temp = sqrt(sum);
            //cout << temp << " " ;
            if(temp*temp == sum)    count++;
            for(ll j = i+1; j < N; j++) {
                sum += numbers[j];
                temp = sqrt(sum);
                //cout << temp << " ";
                if(temp*temp == sum)    count++;
            }
            sum = 0;
        }
        cout << "Case #" << test << ": " << count << endl;
    }
    return 0;
}