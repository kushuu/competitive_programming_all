// https://leetcode.com/problems/coin-change

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        // int ans = 0;
        // for(auto x : coins) {
        //     while(amount >= x and amount >= 0) {
        //         cout << x << " " << amount << endl;
        //         ans++;
        //         amount -= x;
        //     }
        //     cout << "endfor " << amount << endl;
        // }
        // cout << ans;
        // if(amount) return -1;
        // return ans;
        vector<double> checkdp(amount+1, INT_MAX);
        checkdp[0] = 0;
        
        for (int i = 1; i <= amount; i++) {
            
            for (auto coin : coins) {
                if (coin <= i) checkdp[i] = min(checkdp[i], checkdp[i-coin]+1);
            }
        }
        return checkdp.back() == INT_MAX ? -1 : checkdp.back();
    }
};