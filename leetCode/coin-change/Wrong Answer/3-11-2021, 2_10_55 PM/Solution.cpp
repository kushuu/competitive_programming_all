// https://leetcode.com/problems/coin-change

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.rbegin(), coins.rend());
        int ans = 0;
        for(auto x : coins) {
            while(amount >= x and amount >= 0) {
                // cout << x << " " << amount << endl;
                ans++;
                amount -= x;
            }
            // cout << "endfor " << amount << endl;
        }
        if(amount) return -1;
        return ans;
    }
};