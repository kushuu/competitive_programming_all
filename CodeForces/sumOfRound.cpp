#include<bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>
using namespace std;

int main()
{
    ll T;   cin >> T;
    while(T--) {
        ll N;   cin >> N;
        ll multiplier = 1;
        vll numbers;
        while(N) {
            if(N%10 != 0)
                numbers.push_back(multiplier * (N%10));
            
            multiplier *= 10;
            N /= 10;
        }
        cout << numbers.size() << endl;
        for(ll i: numbers)  cout << i << " ";
        cout << endl;
    }
    return 0;
}