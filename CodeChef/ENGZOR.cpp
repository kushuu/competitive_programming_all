#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t = 0 ; t < T ; t++)    // TAKING CARE OF THE TEST-CASES
    {
        int N, Q, P, d, binaryNum[32], r, len=0 , even1 = 0 , odd1 = 0;
        cin>>N>>Q;
        int A[N], bitVal;

        for(int i = 0 ; i < N ; i++)
            cin>>A[i];

        for(int i = 0 ; i < Q ; i++ )
        {
            cin>>P;
            for (int j=0;j<N;j++) 
            {
                int res = 0, count1 = 0; // Initialize result

                // Assuming 32-bit Integer
                for (int k = 31; k >= 0; k--)
                {
                    // Find current bits in x and y
                    bool b1 = P & (1 << k);
                    bool b2 = A[j] & (1 << k);

                    // If both are 1 then 0 else xor is same as OR
                    bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);

                    // Update result
                    res <<= 1;
                    res |= xoredBit;
                }
                int binaryNum[32];

                // counter for binary array
                int lenBin = 0;
                while (res > 0)
                {

                    // storing remainder in binary array
                    binaryNum[lenBin] = res % 2;
                    res = res / 2;
                    lenBin++;
                }
                for (int last = 0 ; last < lenBin ; last++)
                {
                    if(binaryNum[last] == 1)
                        count1++;
                }
                if (count1 %2 == 0)
                    even1++;
                else
                {
                    odd1++;
                }
                

            }
            cout<<even1<<" "<<odd1;
        }
    }
}