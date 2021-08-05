// https://leetcode.com/problems/degree-of-an-array

#pragma GCC optimize("Ofast")
// disable c++ c stdio sync to prevent huge io performance degradation 
static const auto __ = [] {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  return nullptr;
}();

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
        
        // ATTEMPT #1
        /*
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
        */
        
        // ATTEMPT #2
        map<int, int> left, right, check;
        int size = nums.size(), max_freq = 1;
        for(int i = 0; i < size; i++) {
            if(left.find(nums[i]) == left.end()) left[nums[i]] = i;
            right[nums[i]] = i;
            check[nums[i]]++;
            max_freq = max(max_freq, check[nums[i]]);
        }
        
        int ans = size;
        for(auto i : check) {
            if(i.second == max_freq) ans = min(ans, right[i.first] - left[i.first] + 1);
        }
        return ans;
    }
};