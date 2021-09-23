// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m1, m2;
        for(auto i : ransomNote) m1[i]++;
        for(auto i : magazine) m2[i]++;
        
        for(auto i : m1) if(i.second > m2[i.first]) return false;
        return true;
    }
};