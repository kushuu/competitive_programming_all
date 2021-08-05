// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int size = s.size(), idx;
        stack<int> check;
        string ans = "";
        for(int i = 0; i < size; i++) {
            if(s[i] == '(') check.push(i);
            if(s[i] == ')') {
                if(check.empty()) {
                    s[i] = '$';
                }
                else check.pop();
            }
        }

        while(!check.empty()) {
            s[check.top()] = '$';
            check.pop();
        }
        for(auto i : s) {
            if(i != '$') ans += i;
        }
        
        return ans;
    }
};