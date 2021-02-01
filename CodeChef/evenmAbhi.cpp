#include<bits/stdc++.h>
#define number 4294967295
#define ll long long int
using namespace std;

void fun(ll n){
	ll mat[n][n];
	ll i,j,up,down,left,right;
	up = 0;
	ll no = 1;
	down = n - 1;
	left = 0;
	right = n - 1;
	while(up <= down and left <= right ){
		for(i = up ; i <= right ;i++){
			mat[up][i] = no;
			no++;
		}
		up++;
		for(i = up ; i <= down ;i++ ){
			mat[i][right] = no;
			no++;
		}
		right--;
		if( up <= down ){
		    for(i = right ; i >= left ; i--){
			    mat[down][i] = no;
			    no++;
		    }
		    down--;
		}
		if( left <= right ){
		for( i = down ; i >= up ; i-- ){
			mat[i][left] = no;
			no++;
		}
		    left++;
		}
	}
	//ll i = 0;

	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n ; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
		
		ll t;
		cin>>t;
		while(t--){
			ll n,i,x;
			cin>>n;
			fun(n);
			cout<<endl;
		}

	return 0;
}