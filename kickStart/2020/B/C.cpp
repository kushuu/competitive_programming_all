#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define mod 1e9

int main()
{
    IOS;
    int T;
    cin >> T;
    for (int test = 1; test <= T; test++)
    {
        string falana;
        cin >> falana;
        stack<int> openBr;
        for(ll i = 0; i < falana.size(); i++ )
        {
            if(falana[i] == '(')
                openBr.push(i);
            if(falana[i] == ')')
            {
                cout << "hatega: " << falana.substr(openBr.top() - 1, i + 1) << endl;
                // cout << "aayega: " << falana.substr(openBr.top()+1,  i)*int(falana[openBr.top()-1);
            }
        }
    }
}