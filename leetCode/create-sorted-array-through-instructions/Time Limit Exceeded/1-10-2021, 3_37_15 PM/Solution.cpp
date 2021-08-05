// https://leetcode.com/problems/create-sorted-array-through-instructions

class Solution {
public:
    int createSortedArray(vector<int>& nums) {
        multiset<int> check;
        unordered_map<int, int> checkmap;
        // for(auto i : nums) checkmap[i]++;
        
        int tempsize = 0, ans = 0;
        for(auto i : nums) {
            checkmap[i]++;
            check.insert(i);
            tempsize++;
            int idx = distance(check.begin(), check.find(i)) + max(0,checkmap[i]-1);
            cout << idx << " " ;
            ans += min(idx-max(0, checkmap[i]-1), tempsize-idx-1);
            
            // debug
            // for(auto x : check) cout << x << " " ; cout << endl;
            // cout << idx << " " << tempsize-idx-1  << endl;
        }
        return ans;
    }
};