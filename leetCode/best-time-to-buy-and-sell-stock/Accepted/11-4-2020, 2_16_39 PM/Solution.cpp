// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        //if(size <= 1) return 0;
        
        int ans = 0, tempMin = INT_MAX;
        for(auto i : prices) {
            if(i < tempMin)
                tempMin = i;
            else
                ans = max(ans, i-tempMin);
        }
        return ans;
    }
};