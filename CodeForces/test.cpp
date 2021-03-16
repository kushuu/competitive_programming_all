#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*vector<long long> arr = {1, -2, -3, 4, -5};
	cout << "OG: ";for(long long i = 0; i < 5; i++) cout << arr[i] << " "; cout << endl;
	//for(long long i = 0; i < 5; i++)arr[i] *= -1;
	arr[2] *= -1;
	cout << "NEW: ";for(long long i = 0; i < 5; i++) cout << arr[i] << " "; cout << endl;*/
    for(int i = 0; i < 10; i++) cout << i << " " ;
}

int jumpingOnClouds(vector<int> c) {
    int ans = 0;
    for(int i = 0; i < c.size();) {
        if(c[i+1] == 1) {
            ans++;
            i+=2;
        }
        else if(c[i+2] == 0) {
            ans++;
            i+=2;
        }
        else {
            ans++;
            i++;
        }
    }
    return ans;
}



//0 0 1 0 0 1 0
/*
i 
0
1
3
4
6
*/