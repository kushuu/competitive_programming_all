// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, size = prices.size();
        for(int i = 1; i < size; i++) if(prices[i] > prices[i-1]) ans += prices[i]-prices[i-1];
        return ans;
    }
};