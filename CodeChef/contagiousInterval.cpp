#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ele; cin >> n;
    vector<int> arr; for(int i = 0; i < n; i++) {cin >> ele; arr.push_back(ele);}
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    vector<int> temp;

    for(int i = 0; i < n; i++) {
        temp.push_back(arr[i]);
        if(arr[i+1] == arr[i]+1) {
            temp.push_back(arr[i+1]);
        }
        else {
            if(temp.size() == 1) {
                temp.push_back(temp[0]);
                ans.push_back(temp);
            }
            else {
                vector<int> final;
                final.push_back(temp[0]);
                final.push_back(temp[temp.size()-1]);
                ans.push_back(final);
            }
            temp.clear(); 
        }           
    }
    return 0;
}