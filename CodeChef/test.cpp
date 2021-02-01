#include <iostream>
using namespace std;

int main() {
    //code
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n], zcnt = 0, ocnt = 0, tcnt = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] == 0) zcnt++;
            else if(arr[i] == 1) ocnt++;
            else tcnt++;
        }
        //cout << zcnt << " " << ocnt << " " << tcnt << endl;
        int ans[n] = {0};
        for(int i = 0; i < zcnt; i++) {ans[i] = 0;}
        for(int i = 0+zcnt; i < zcnt+ocnt; i++) {ans[i] = 1;}
        for(int i = 0+zcnt+ocnt; i < zcnt+ocnt+tcnt; i++) {ans[i] = 2;}
        
        for(auto i : ans) cout << i << " " ; cout << endl;
        
        //for(int i = 0; i < n; i++) cout << ans[i] << " "; cout << endl;
    }
    return 0;
}