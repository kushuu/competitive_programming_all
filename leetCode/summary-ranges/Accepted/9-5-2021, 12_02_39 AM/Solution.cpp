// https://leetcode.com/problems/summary-ranges

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<string> ans;
        string temp = to_string(nums[0]);
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]+1) {
                if(temp != to_string(nums[i-1])) {
                    temp += "->" + to_string(nums[i-1]);
                }
                ans.push_back(temp);
                temp = to_string(nums[i]);
            }
            else {
                if(i == nums.size()-1) {
                    // cout << i << " " ;
                    temp += "->" + to_string(nums[i]);
                    ans.push_back(temp);
                }
            }
        }
        ans.push_back(temp);
        if(ans.size() >= 2 and ans[ans.size()-1] == ans[ans.size()-2]) ans.pop_back();
        // cout << temp;
        return ans;
    }
};