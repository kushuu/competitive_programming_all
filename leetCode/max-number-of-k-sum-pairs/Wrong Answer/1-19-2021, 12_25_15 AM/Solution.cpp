// https://leetcode.com/problems/max-number-of-k-sum-pairs

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> check;
        for(auto i : nums)  check[i]++;
        
        // for(auto i : check) cout << i.first << " " << i.second << endl;
        int ans = 0;
        for(auto i : check) {
            int val = i.first;
            if(val*2 == k) {
                if(check[val] > 1) ans+=2;
            }
            else if(check[k-val]) ans++;
        }
        return ans/2;
    }
};