// https://leetcode.com/problems/burst-balloons

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int size = nums.size();
        if(!size) return 0;
        
        int ans = 0;
        for(int i = 0; i < size-1; i++) {
            int temp, tempMin = INT_MAX, pos = -1;
            for(int i = 1; i < size; i++) {
                if(nums[i] < tempMin) {
                    tempMin = nums[i];
                    pos = i;
                }
            }
            // cout << tempMin << " " << pos << endl;
            ans += nums[pos-1]*nums[pos]*nums[pos+1];
            nums.erase(nums.begin()+pos);
            size--;
        }
        // cout << ans << endl;
        // for(auto i : nums) cout << i << " " ;
        ans += nums[0]*nums[1] + max(nums[0], nums[1]);
        cout << ans;
        return ans;
    }
};