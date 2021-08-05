// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one = "", two = "";
        for(auto i : word1) one += i;
        for(auto i : word2) two += i;
        
        return one == two;
    }
};