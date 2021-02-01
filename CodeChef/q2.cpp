#include<bits/stdc++.h> 
#define ll long long int
using namespace std; 
  
const int MAX = 500; 
int dp[MAX][MAX]; 
  
int cuts(int m, int n) 
{
    int vertical_min = INT_MAX; 
    int horizontal_min = INT_MAX; 
      
    if (m == n) 
        return 1; 
      
    if (dp[m][n]) 
            return dp[m][n]; 
      
    for (int i = 1;i<= m/2;i++) 
        horizontal_min = min(cuts(i, n) + cuts(m-i, n), horizontal_min);  
      
    for (int j = 1;j<= n/2;j++) 
        vertical_min = min(cuts(m, j) + cuts(m, n-j), vertical_min); 
          
    dp[m][n] = min(vertical_min, horizontal_min);  
          
    return dp[m][n]; 
} 
  
int main() 
{ 
    ll T;   cin >> T;
    while(T--) {
    ll m, n;    cin >> m >> n;
    cout << cuts(m, n) << endl; 
    }
    return 0; 
} 