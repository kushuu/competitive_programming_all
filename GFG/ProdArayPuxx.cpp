#include<bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>

using namespace std;

int main()
{
    int T; cin >> T;
    while(T--) {
        ll N; cin >> N;
        vll prods;
        ll nums[N]; for(ll i = 0; i < N; i++) cin >> nums[i];
        for(ll i = 0; i < N; i++) {
            ll prod = 1;
            for(ll j = 0; j < N; j++)
                if(j != i)
                    prod *= nums[j];
            
            prods.push_back(prod);
        }
        for(auto i: prods) cout << i << " ";
        cout << endl;
    }
}