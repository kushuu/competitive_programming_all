// https://leetcode.com/problems/count-items-matching-a-rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0, size = items.size();
        for(int i = 0; i < size; i++) {
            if((items[i][0] == ruleValue and ruleKey == "type") || (items[i][1] == ruleValue and ruleKey == "color") || (items[i][2] == ruleValue and ruleKey == "name"))
                ans++;
        }
        return ans;
    }
};