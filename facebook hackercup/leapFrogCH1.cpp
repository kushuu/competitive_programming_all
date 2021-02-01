#include<bits/stdc++.h>
#define ll long long int
#define vs vector<string>

using namespace std;

int main()
{
    ll T; cin >> T;
    for(ll test = 1; test <= T; test++) {
        cout << "Case #" << test << ": " ;
        string leaves; cin >> leaves;
        ll dCnt = 0, bCnt = 0;
        for(char i : leaves)
            if(i == '.')    dCnt++;
            else if(i == 'B')   bCnt++;
        if((bCnt < dCnt || dCnt == 0))
            cout << "N" << endl;
        else
            cout << "Y" << endl;
    }
}