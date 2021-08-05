// https://leetcode.com/problems/group-anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& in) {
        vector<string> strs(in.begin(), in.end());
        for(auto &i : strs) {
            sort(i.begin(), i.end());
        }
        
        
        int size = strs.size();
        map<string, vector<int>> check;
        for(int i = 0; i < size; i++) {
            check[strs[i]].push_back(i);
        }
        
        vector<vector<string>> ans;
        for(auto i : check) {
            vector<string> temp;
            for(auto x : i.second) temp.push_back(in[x]);
            ans.push_back(temp);
        }
        return ans;
    }
};