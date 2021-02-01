#include <bits/stdc++.h>
using namespace std;

long long int factorize(long long n)
{
    int count = 0;
    long long int finalCount = 0;
    while (!(n % 2))
    {
        n /= 2;
        count++;
    }
    finalCount += count;

    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        count = 0;
        while (n % i == 0)
        {
            count++;
            n = n / i;
        }
        if (count)
        {
            finalCount += count;
        }
    }

    if (n > 2)
    {
        //cout << n << "  " << 1 << endl;
        finalCount += 1;
    }
    return finalCount;
}

int main()
{
    long long int usefulVar;
    int T;
    cin >> T;
    while (T--)
    {
        long long int N, K;
        cin >> N >> K;
        usefulVar = factorize(N);
        if (usefulVar >= K)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}