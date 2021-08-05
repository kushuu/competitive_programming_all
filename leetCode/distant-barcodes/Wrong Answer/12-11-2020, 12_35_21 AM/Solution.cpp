// https://leetcode.com/problems/distant-barcodes

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i = 1; i < size; i++) {
            if(nums[i] == nums[i-1]) {
                if(i != size-1){
                    int x = i+1;
                    while(nums[x] == nums[i] && x < size) x++;
                    swap(nums[i], nums[x]);
                    i++;
                }
                else {
                    nums.insert(nums.begin(), nums[i]);
                    nums.pop_back();
                }
                // int x = i+1;
                // while(nums[x] == nums[i] && x < size) x++;
                // swap(nums[i], nums[x]);
                // i++;
            }
        }
        return nums;
    }
};