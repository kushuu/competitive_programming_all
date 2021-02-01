#include<bits/stdc++.h>
#define ll long long int
#define vll vector<long long int>

using namespace std;

void sidon(ll N)
{
    ll sum = 0;
    vll nums = {1, 2, 4, 8, 13, 21, 31, 45, 66, 81, 97,
     123, 148, 182, 204, 252, 290, 361, 401, 475, 565,
      593, 662, 775, 822, 916, 970, 1016, 1159, 1312,
       1395, 1523, 1572, 1821, 1896, 2029, 2254, 2379,
        2510, 2780, 2925, 3155, 3354, 3591, 3797, 3998,
         4297, 4433, 4779, 4851};
    if(N <= 50) {
        for(ll i = 0; i < N; i++) {
            cout << nums[i] << " ";
            sum += nums[i];
        }
        cout << endl << sum;
    }
}

int main()
{
    ll N;   cin >> N;
    sidon(N);
}