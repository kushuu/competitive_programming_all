#include <bits/stdc++.h>
//shorts
#define ll long long int
#define sll stack<long long int>
#define vll vector<long long int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
//
using namespace std;

int main() {
    fastIO;
    ll T; cin >> T;
    while(T--) {
        ll N;   cin >> N;
        if(N==1) {
            cout << "1" << endl;
            continue;
        }
        else if(N == 2) {
            cout << "1 2\n4 3" << endl;
            continue;
        }
        else 
        {
            ll ans[N][N];
            ll i,j,upperLimit,lowerLimit,left,right;
            right = N - 1;
            upperLimit = 0;
            left = 0;
            ll no = 1;
            lowerLimit = N - 1;
            while(upperLimit <= lowerLimit && left <= right ){
                for(i = upperLimit ; i <= right ;i++){
                    ans[upperLimit][i] = no++;
                }
                upperLimit++;
                for(i = upperLimit ; i <= lowerLimit ;i++ ){
                    ans[i][right] = no++;
                }
                right--;
                if( upperLimit <= lowerLimit ){
                    for(i = right ; i >= left ; i--){
                        ans[lowerLimit][i] = no++;
                    }
                    lowerLimit--;
                }
                if( left <= right ){
                for( i = lowerLimit ; i >= upperLimit ; i-- ) {
                    ans[i][left] = no++;
                }
                    left++;
                }
	        }
        for(ll i = 0 ; i < N ; i++){
            for(ll j = 0 ; j < N ; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        }
    }
    return 0;
}