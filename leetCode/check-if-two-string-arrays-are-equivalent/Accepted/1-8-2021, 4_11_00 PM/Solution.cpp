// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one = "", two = "";
        for(auto i : word1) one += i;
        for(auto i : word2) two += i;
        
        int s1 = one.size(), s2 = two.size();
        if(s1 != s2) return false;
        for(int i = 0; i < s1; i++) if(one[i] != two[i]) return false;
        return true;
    }
};