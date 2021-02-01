#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        int arr[N]; for(int i = 0; i < N; i++) cin >> arr[i];
        for(int i = 0; i < N; i++) cout << arr[arr[i]] << " "; cout << endl;
    }
    return 0;
}