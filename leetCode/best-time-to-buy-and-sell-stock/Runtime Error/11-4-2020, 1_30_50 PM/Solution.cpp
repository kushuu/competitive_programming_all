// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int pos = size-1;
        if(prices[0] >= prices[1]) {
            for(int i = 1; i < size; i++) {
                if(prices[i] < prices[i-1]) {
                    pos = i;
                    break;
                }
            }
        }
        else 
            pos = 0;
        //cout << pos;
        if(pos == size-1) return 0;
        
        int ans = 0;
        for(int i = pos; i < size; i++) {
            for(int j = i+1; j < size; j++) {
                ans = max(ans, prices[j] - prices[i]);
                //cout << prices[i] << " "  << prices[j] << endl;
            }
        }
        return ans;
    }
};