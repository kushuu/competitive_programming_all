// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> check;
        int ans = -1;
        for(auto i : s) check[i]++;
        for(int i = 0; i < s.size(); i++) if(check[s[i]] == 1) return i;
        return ans;
    }
};