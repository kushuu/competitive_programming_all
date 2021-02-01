//          WRONG SOLUTION.

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> SOE(ll n)
{
    vector<ll> primes;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            primes.push_back(p);

    return primes;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;

        vector<ll> primes = SOE(N);
        cout << 2 << endl;
        cout << primes.size() << " 1 ";
        for (ll i = 0; i < primes.size() - 1; i++) //Prints the primes till the second last element.
            cout << primes[i] << " ";
        cout << "\n";

        ll firstLength = primes.size();
        ll secondLength = N - firstLength;

        cout << secondLength << " " << primes[primes.size() - 1] << " ";

        bool nonPrimes[N + 1];
        memset(nonPrimes, false, sizeof(nonPrimes));

        vector<ll> temp = SOE(N);
        for (ll i = 0; i < temp.size(); i++)
            nonPrimes[temp[i]] = true;

        for (ll i = 2; i <= N; i++)
            if (!nonPrimes[i])
                cout << i << " ";

        cout << "\n";
    }
}