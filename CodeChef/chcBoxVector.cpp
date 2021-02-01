#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, ele;
    vector<int> W;
    cin >> T;
    for (int tc = 0; tc < T; tc++) // working the loop for T times.
    {
        int chcCount = 0;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> ele;
            W.push_back(ele);
        }

        // now we have the vector with us.
        int maxEle = *max_element(W.begin(), W.end()); // gives the maximum element from the vector.

        int pos = N - 1;
        for (int i = 0; i < N; i++)
        {
            if (W[pos] != maxEle)
            {
                chcCount++;
                rotate(W.begin(), W.begin() + W.size() - 1, W.end());
            }

            else
                break;
        }

        cout << chcCount << endl;
    }
}