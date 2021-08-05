// https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int size = nums.size();
        
        // O(n) space solution 
        /*
        vector<int> ones;
        for(int i = 0; i < size; i++) if(nums[i]) ones.push_back(i);
        
        int size1 = ones.size();
        if(size1 == 1 || !k) return true;
        for(int i = 1; i < size1; i++) if(ones[i] - ones[i-1] - 1 < k) return false;
        return true;
        */
        
        // O(1) space solution
        int lastFound = -1;
        for(int i = 0; i < size; i++) {
            if(nums[i] == 1) {
                if(lastFound == -1 ) {
                    lastFound = i;
                    continue;
                }
                if(i-lastFound - 1 < k) return false;
                lastFound = i;
            }
        }
        return true;
    }
};