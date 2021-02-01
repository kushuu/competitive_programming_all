#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;    cin >> T;
    for(long long int test = 1; test <= T; test++) {
        long long int N;    cin >> N;
        string P;   cin >> P;
        for(long long int i= 0; i < 2*N-2; i++) {
            if(P[i] == 'E') P[i] = 'S';
            else P[i] = 'E';
        }
        //cout << endl;
        cout << "Case #:" << test << ": " << P << endl;
    }
    return 0;
}