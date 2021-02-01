#include<bits/stdc++.h>
using namespace std;

void rotateRight(int W[], int N) 
{
    int temp= W[N-1];
    for(int i = N-1 ; i > 0 ; i-- )
    {
        W[i] = W[i-1];
    }
    W[0] = temp;
}

int main()
{
    int T, N, ele;
    // vector<int> W;
    cin>>T;
    for(int tc= 0; tc< T; tc++ )  // working the loop for T times.
    {
        int chcCount = 0;
        cin>>N;
        int W[N];
        for(int i = 0 ; i < N ; i++ )
        {
            cin>>W[i];
        }

        // now we have the vector with us.
        int maxEle = W[0];

        for(int k=0;k<N;k++)
        {
            if(W[k] > maxEle)
                maxEle = W[k];
        }

        // cout<<"max ele= "<<maxEle<<endl;        // USED TO CHECK THE MAX ELEMENT.
    
        int pos=N-1;
        for( int i = 0 ; i < N ; i++ )
        {
            //cout<<W[pos]<<endl;                 // USED TO CHECK THE FIRST ELEMENT IN THE ARRAY.
            if (W[pos] != maxEle) 
            {
                chcCount++;
                rotateRight(W,N);
                /*
                for (int j = 0; j < N; j++)
                    cout << " " << W[j];             // USED TO CHECK THE ARRAY AFTER EVERY ROTATION.
                cout<<endl;
                */
            }
            
            else 
                break;
        }
       
        cout<<chcCount<<endl;

    }
}