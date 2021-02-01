#include<bits/stdc++.h>
using namespace std;

bool findRepeating(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int M[N][N];
        int trace = 0, rCount = 0, cCount = 0;   

        for(int i = 0; i < N; i++)   // finds traces as well.
            for(int j = 0; j < N; j++)
            {
                cin >> M[i][j];
                if (i == j)
                    trace+=M[i][j];
            }
        
        cout << "Trace : " << trace << endl;
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
            {
                if (findRepeating(M[i]))
            }
    }
}