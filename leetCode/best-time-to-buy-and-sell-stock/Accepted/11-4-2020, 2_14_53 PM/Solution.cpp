// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if(size <= 1) return 0;
        
        int ans = 0, tempMin = INT_MAX;
        for(int i = 0; i < size; i++) {
            if(prices[i] < tempMin)
                tempMin = prices[i];
            else
                ans = max(ans, prices[i]-tempMin);
        }
        return ans;
    }
};