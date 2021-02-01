#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, M, ele, minElement;
    vector<int> F,P;
    cin>>T;
    while (T) {
        cin >> N >> M;

        int fruitBaskets[M];
        memset(fruitBaskets, -1, sizeof(fruitBaskets));

        for(int i  = 0 ; i < N ; i++ ) {
            cin>>ele ; 
            F.push_back(ele);
            fruitBaskets[F[i]-1] = 0;
        }
        for(int i = 0 ; i < N ; i++ ) {
            cin >> ele;
            P.push_back(ele);
            fruitBaskets[F[i]]+=P[i];
        }

        for(int i=0;i<M;i++)
            cout<<fruitBaskets[i];

        minElement = fruitBaskets[0];
        for (int i = 0 ; i < M ; i++ ){
            if (fruitBaskets[i] < minElement && fruitBaskets[i] != -1)
                minElement = fruitBaskets[i];
        }

        cout<<"\n"<<minElement;
        T--;
    }
}