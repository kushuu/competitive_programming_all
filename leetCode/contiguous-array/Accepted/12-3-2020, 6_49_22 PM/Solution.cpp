// https://leetcode.com/problems/contiguous-array

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int size = nums.size(), ans = 0;
        vector<int> prefChk;
        prefChk.push_back(0);
        
        for(int i = 0; i < size; i++)
            if(!nums[i]) nums[i] = -1;
        
        for(auto i : nums)
            prefChk.push_back(prefChk.back()+i);
        
        unordered_map<int, int> check;
        check[0] = 0;
        for(int i = 0; i < size+1; i++) {
            if(check.find(prefChk[i]) != check.end()) {
                ans = max(ans, i - check[prefChk[i]]);
            }
            else {
                check[prefChk[i]] = i;
            }
        }
        return ans;
    }
};