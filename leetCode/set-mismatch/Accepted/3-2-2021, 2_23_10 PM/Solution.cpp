// https://leetcode.com/problems/set-mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(2);
        sort(nums.begin(), nums.end());
        for(int i = 1; i < size; i++) {
            if(nums[i] == nums[i-1]) {
                ans[0] = nums[i];
                break;
            }
        }
        int temp_sum = accumulate(nums.begin(), nums.end(), 0), hona_tha = (size*(size+1))/2;
        ans[1] = ans[0] + (hona_tha-temp_sum);
        return ans;
        
        // unordered_map<int, int> check;
        // for(auto x : nums) check[x]++;
        // for(auto i : check) {
        //     if(i.second == 2) {
        //         ans[0] = i.first;
        //         break;
        //     }
        // }
        // for(int i = 1; i <= size; i++) {
        //     if(check.find(i) == check.end()) {
        //         ans[1] = i;
        //         break;
        //     }
        // }
        return ans;
    }
};