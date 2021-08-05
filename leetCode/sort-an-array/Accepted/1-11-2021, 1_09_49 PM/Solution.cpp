// https://leetcode.com/problems/sort-an-array

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
     int size = nums.size();
     counting_sort(nums, size);
     return nums;
    }
    
    
    void counting_sort(vector<int> & nums, int size)
    {
        int min_val = *min_element(nums.begin(),nums.end());
        int max_val = *max_element(nums.begin(),nums.end());
        int range = (max_val - min_val) + 1;
        vector<int> counter(range);
        vector<int> temp(size);
        for (int i = 0 ; i < size; i++)
            counter[nums[i] - min_val]++;
        for (int i = 1; i < range; i++)
            counter[i]+=counter[i-1];
        for (int i = 0 ; i < size; i++)
        {
            temp[counter[nums[i] - min_val] - 1] = nums[i];
            counter[nums[i] - min_val]--;
        }
        
        for (int i = 0 ; i < size; i++)
        {
            nums[i] = temp[i];    
        }
    }
    
    
};