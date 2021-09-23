// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 7 1 1 1 1 1
        // 7 6 6 6 6 4
        int ans = 0, size = prices.size();
        vector<int> pre(size), post(size);
        pre[0] = prices[0];
        post.back() = prices.back();
        for(int i = 1; i < size; i++) pre[i] = min(pre[i-1], prices[i]);
        for(int i = size-2; i >= 0; i--) post[i] = max(post[i+1], prices[i]);
        
        for(int i = 0; i < size; i++) ans = max(ans, post[i] - pre[i]);
        return ans;
    }
};