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
    ll N;   cin >> N;
    vector<string> numbers;
    for(ll i = 1; i <= N; i++)  numbers.push_back(to_string(i));
    //for(ll i = 0; i < N; i++) cout << numbers[i] << "  ";
    sort(numbers.begin(), numbers.end());
    vector<long long int> answer;
    for(ll i = 0; i < N; i++) answer.push_back(numbers[i]);

    for(auto i: answer) cout << i << " " ;

    return 0;
}