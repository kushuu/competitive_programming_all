#include<bits/stdc++.h>
#define vll vector<long long int>
#define ll long long int

using namespace std;

int main()
{
    ll T;   cin >> T;
    while(T--) {
        ll h, c, t; cin >> h >> c >> t;
        double temp = h;
        ll count = 1;
        bool hotFlag = true;
        vector<long double> highVec;
        ll i = 0;
        do{
            if(hotFlag) {
                temp = (temp + h)/2;
                hotFlag = false;
                highVec.push_back(temp);
                cout << "if mei " << temp << endl;

            }
            else {
                temp = (temp + c)/2;
                hotFlag = true;
                cout << "else mei " << temp << endl;
            }
            count++;
            i++;    
        
            if(temp == (double)(t))   break;
        }while( highVec[i-1] > highVec[i] );
        for(auto i: highVec) cout << i << " "; cout << endl;
        cout << "ans " << count << endl;
    }
}