// https://leetcode.com/problems/degree-of-an-array

class Solution {
public:
    int find_l(vector<int> vec, int num) {
        int i;
        for(i = vec.size()-1; i >= 0; i--) {
            if(vec[i] == num) break;
        }
        return i;
    }
    
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> check;
        
        int size = nums.size(), max_freq = 1;
        for(auto i : nums) {
            check[i]++;
            max_freq = max(max_freq, check[i]);
        }
        
        if(!size) return 0;
        vector<int> freq_ele;
        for(auto i : check) {
            if(i.second == max_freq)
                freq_ele.push_back(i.first);
        }
        
        int ans = INT_MAX;
        for(auto i : freq_ele) {
            int first = find(nums.begin(), nums.end(), i) - nums.begin();
            int last = find_l(nums, i);
            ans = min(ans, last-first+1);
        }
        return ans;
    }
};