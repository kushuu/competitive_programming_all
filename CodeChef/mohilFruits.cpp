#include <bits/stdc++.h>
#include <assert.h>
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int u = 0; u < t; u++)
    {
        int m, n;
        cin >> n >> m;
        int f[n], p[n], total[m];
        memset(total, -1, sizeof(total));
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
            f[i]--;
            total[f[i]] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            total[f[i]] += p[i];
        }
        int min = 9999999;
        for (int i = 0; i < m; i++)
        {
            if (total[i] != -1 && min > total[i])
                min = total[i];
        }
        cout << min << endl;
    }
    return 0;
}