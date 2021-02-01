#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int retOnes(int A[] , int N)
{
    int cnt=0;
    for(int i = 0; i < N; i++)
        if (A[i] == 1)
            cnt++;
    
    return cnt;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        bool flag = false;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        
        if (retOnes(A, N) == 1)
            cout << "YES\n";
        else 
        {
            for(int i = 0; i < N; i++)
            {
                flag = false;
                int counter = 0;
                if (A[i] == 1)
                {
                    int j = i+1;
                    while(A[j] != 1 && j < N) {
                        counter++;
                        j++;
                    }
                    cout << "counter: "<<counter;
                }
                if (counter >= 5)
                    flag = true;
                else
                    flag = false;
            }
            if (flag)
                cout << "YES\n";
            else
            {
                cout << "NO\n";
            }
        }
        
    }
}  