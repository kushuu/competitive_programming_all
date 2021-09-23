// https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
    string reverseWords(string s) {
        vector<string> check;
        string temp = "";
        for(auto i : s) {
            if( i == ' ') { check.push_back(temp); temp = ""; }
            else temp += i;
        }
        check.push_back(temp);
        for(auto &i : check) reverse(i.begin(), i.end());
        
        string ans = "";
        for(auto i : check) ans += i + " ";
        ans.pop_back();
        return ans;
    }
};