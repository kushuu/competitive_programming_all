// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int size = nums.size();
        if(size <= 2) return size;
        // cout << size << endl;
        
        for(int i = 2; i < size; i++) {
            
            if(nums[i] == nums[i-1] && nums[i] == nums[i-2]) {
                // cout << *(nums.begin()+i) << " " ;
                nums.erase(nums.begin()+i);
                size--;
                int x = i;
                // cout << x << " " ;
                while(nums[x]==nums[i-1] && x < size) {
                    nums.erase(nums.begin()+x);
                    // x++;
                    size--;
                }
                x = i;
                // cout << x << endl ;
            }
            
        }
        return nums.size();
    }
};