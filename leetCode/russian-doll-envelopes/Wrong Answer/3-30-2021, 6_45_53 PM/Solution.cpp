// https://leetcode.com/problems/russian-doll-envelopes

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        // for(auto i : nums) cout << i[0] << " " << i[1] << endl;
        int ans = 1, temp = 1;
        for(int i = 1; i < size; ) {
            if(nums[i][0] > nums[i-1][0] and nums[i][1] > nums[i-1][1]) i++;
            else {
                nums.erase(nums.begin() + i);
                size--;
            }
        }
        
        return nums.size();
    }
};