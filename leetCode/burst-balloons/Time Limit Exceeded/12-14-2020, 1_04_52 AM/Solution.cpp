// https://leetcode.com/problems/burst-balloons

class Solution {
public:
    unordered_map<string, int> fuckall;
    int f(vector<int> temp, int l, int r) {
        string tmpStr = to_string(l) + "|" + to_string(r);
        if(fuckall.find(tmpStr) == fuckall.end()) {
            int ans = 0;
            for(int i = l+1; i < r; i++) {
                int tmpSum = temp[l]*temp[i]*temp[r];
                ans = max(ans, tmpSum + f(temp, l,i) + f(temp, i, r));
            }
            fuckall[tmpStr] = ans;
            return ans;
        }
        
        return fuckall[tmpStr];
    }
    
    int maxCoins(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int> check = nums;
        check.insert(check.begin(), 1);
        // cout << "here";
        check.push_back(1);
        
        // for(auto i : check) cout << i << " " ;
        
        int size = check.size();
        return f(check, 0, size-1);
    }
};