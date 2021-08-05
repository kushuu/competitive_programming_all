// https://leetcode.com/problems/squares-of-a-sorted-array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // priority_queue<int> temp;
        // for(auto i : nums) temp.push(i*i);
        // vector<int> ans;
        // while(!temp.empty()) {
        //     ans.push_back(temp.top());
        //     temp.pop();
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;
        
        
        // multiset<int> temp;
        // for(auto i : nums) temp.insert(i*i);
        // vector<int> ans(temp.begin(), temp.end());
        // return ans;
        
        int size = nums.size();
        for(int i = 0; i < size; i++) nums[i] *= nums[i];
        sort(nums.begin(), nums.end());
        return nums;
    }
};