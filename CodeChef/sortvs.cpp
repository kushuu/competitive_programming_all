#include <bits/stdc++.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts
#define pll pair<long long int, long long int>

using namespace std;

int counts(vll numbers) 
{
    ll n = numbers.size(); 
    pll pos_arr[n]; 
    for (ll i = 0; i < n; i++) 
    { 
        pos_arr[i].first = numbers[i]; 
        pos_arr[i].second = i; 
    }
    sort(pos_arr, pos_arr + n);
    vector<bool> visited_idx(n, false); 
  
    int ans = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
        if (visited_idx[i] || pos_arr[i].second == i) 
            continue;
        int cycle_size = 0; 
        int j = i; 
        while (!visited_idx[j]) 
        { 
            visited_idx[j] = 1; 
            j = pos_arr[j].second; 
            cycle_size++; 
        } 
        if (cycle_size > 0) 
            ans += (cycle_size - 1); 
    } 
    return ans;
}

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll N, M, ele;    cin >> N >> M;
        vll arrOfNums;
        for(ll i = 0; i < N; i++) {
            cin >> ele;
            arrOfNums.push_back(ele);
        }
        cout << counts(arrOfNums) << endl;   
    }
    return 0;
}