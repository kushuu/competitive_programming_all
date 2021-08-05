// https://leetcode.com/problems/contiguous-array

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int cnt = 0, size = nums.size(), ele = 0;
        vector<int> check;
        for(int i = 0; i < size; i++) {
            ele++;
            if(nums[i] == 1) cnt++;
            else cnt--;
            if(!cnt) {
                check.push_back(i);
                ele = 0;
            }
        }
        // for(auto i : check) cout << i << " " ;
        int sz = check.size();
        if(check.empty()) return 0;
        if(sz == 1) return check[0]+1;
        int ans = check[0];
        for(int i = 1; i < sz; i++)
            ans = max(ans, check[i] - check[i-1]+2);
        return ans;
    }
};