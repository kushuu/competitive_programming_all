// https://leetcode.com/problems/3sum-closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        
        int ans = INT_MAX, prev = INT_MAX;
        for(int i = 0; i < size; i++) {
            int j = i+1, k = size-1;
            while(j < k) {
                // cout << ans << " " ;
                int temp_sum = nums[i]+nums[j]+nums[k];
                int diff = abs(temp_sum-target);
                if(diff < prev) ans = temp_sum;
                prev = diff;
                if(temp_sum == target) {
                    j++, k--;
                    return target;
                }
                if(temp_sum > target) k--;
                else j++;
            }
        }
        return ans;
    }
};