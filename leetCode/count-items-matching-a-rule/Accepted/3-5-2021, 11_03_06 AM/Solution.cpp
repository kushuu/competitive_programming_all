// https://leetcode.com/problems/count-items-matching-a-rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int size = items.size(), ans = 0;
        for(auto i : items) {
            if((i[0] == ruleValue and ruleKey == "type") || (i[1] == ruleValue and ruleKey == "color") || (i[2] == ruleValue and ruleKey == "name")) ans++;
        }
        return ans;
    }
};