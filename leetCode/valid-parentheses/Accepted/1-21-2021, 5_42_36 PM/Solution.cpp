// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        map<char, char> closing;
        closing['}'] = '{';
        closing[']'] = '[';
        closing[')'] = '(';
        
        for(auto i : s) {
            if(i == ')' || i == ']' || i == '}') {
                if(check.empty()) return false;
                else {
                    if(closing[i] != check.top()) return false;
                    else check.pop();
                }
            }
            else check.push(i);
        }
        return check.empty();
    }
};