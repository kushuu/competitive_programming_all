// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> v1(26, 0);
        for(auto i : s) v1[i-'a']++;
        for(auto i : t) {
            // if(v1[i-'a'] < 1) return false;
            v1[i-'a']--;
        }
        for(int i = 0; i < 26; i++) if(v1[i] != 0) return false;
        return true;
    }
};