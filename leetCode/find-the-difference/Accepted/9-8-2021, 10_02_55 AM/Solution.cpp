// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m1, m2;
        for(auto i : s) m1[i]++;
        for(auto i : t) m2[i]++;
        
        for(auto i : m1) if(i.second != m2[i.first]) return i.first;
        for(auto i : m2) if(i.second != m1[i.first]) return i.first;

        return ' ';
    }
};