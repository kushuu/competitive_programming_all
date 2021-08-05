// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if(size <= 1) return 0;
        
        int ans = 0;
        for(int i = 0; i < size; i++) {
            for(int j = i+1; j < size; j++) {
                ans = max(ans, prices[j] - prices[i]);
                //cout << prices[i] << " "  << prices[j] << endl;
            }
        }
        return ans;
    }
};