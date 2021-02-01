#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
#define INT_BITS sizeof(int) * 8
using namespace std;

string decToBin(ll deci)
{
    bitset<INT_BITS> d(deci);
    string ans = d.to_string();
    return ans;
}

int main()
{
    ll deci = 9787456321026;
    string ans = decToBin(deci);
    cout << ans << endl;
    return 0;
}