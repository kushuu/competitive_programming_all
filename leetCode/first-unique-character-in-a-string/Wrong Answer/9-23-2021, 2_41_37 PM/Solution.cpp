// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char, int> check;
        char check[26] = {0};
        for(auto i : s) check[i - 'a']++;
        for(int i = 0; i < s.size(); i++) if(check[s[i] - 'a'] == 1) return i;
        return -1;
    }
};