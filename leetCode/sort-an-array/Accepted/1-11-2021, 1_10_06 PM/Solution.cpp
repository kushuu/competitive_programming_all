// https://leetcode.com/problems/sort-an-array

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
     counting_sort(nums);
     return nums;
    }
    
    
    void counting_sort(vector<int> & nums)
    {
        int min_val = *min_element(nums.begin(),nums.end());
        int max_val = *max_element(nums.begin(),nums.end());
        int range = (max_val - min_val) + 1;
        vector<int> counter(range);
        vector<int> temp(nums.size());
        for (int i = 0 ; i < temp.size(); i++)
            counter[nums[i] - min_val]++;
        for (int i = 1; i < counter.size(); i++)
            counter[i]+=counter[i-1];
        for (int i = 0 ; i < temp.size(); i++)
        {
            temp[counter[nums[i] - min_val] - 1] = nums[i];
            counter[nums[i] - min_val]--;
        }
        
        for (int i = 0 ; i < nums.size(); i++)
        {
            nums[i] = temp[i];    
        }
    }
    
    
};