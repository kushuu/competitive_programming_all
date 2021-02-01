#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--) 
    {
        long long int N;
        cin>>N;
        long long int A[N] , B[N];
        long long int maxA = -1, maxB = -1;

        for (long long int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] > maxA)
                maxA = A[i];
        }

        for (long long int i = 0; i < N; i++) {
            cin >> B[i];
            if (B[i] > maxB)
                maxB = B[i];
        }

        if ( maxA != maxB )
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}