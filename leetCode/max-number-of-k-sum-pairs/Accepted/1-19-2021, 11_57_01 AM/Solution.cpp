// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> check;
        
        int ans = 0;
        for(auto i : nums) {
            int temp = k-i;
            if(check[temp] > 0) {
                ans++;
                check[temp]--;
            }
            else check[i]++;
        }
        return ans;
    }
};