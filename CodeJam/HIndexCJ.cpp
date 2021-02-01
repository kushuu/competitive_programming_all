#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    vector<ll> vec , ansVec;
    ll N, i, T, ele, leastVal, temp, cnt = 0, printCase=1;
    cin >>T;
    temp=T;
    while(T>0) {
        ansVec.clear();
        vec.clear();
        ansVec.push_back(1);
        cin>>N;
        for(i = 0 ; i < N ; i++) {
            cin>>ele;
            vec.push_back(ele);
        }

    leastVal = 1;

    for(i = 2 ; i <= vec.size() ; i++) {
        cnt=0;
        for(int j = i ; j > 0 ; j--) 
            if(vec[j-1] > leastVal ) 
                cnt++;
        if(cnt > leastVal)
            leastVal++;
        ansVec.push_back(leastVal);
    }
    // cout<<"check";
    cout<<"Case #"<<printCase<<": ";
    for(int j = 0 ; j < ansVec.size() ; j++)
        cout<<ansVec[j]<<" ";
    cout<<"\n";

    printCase+=1;
    --T;
    }
}