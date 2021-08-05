// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        map<char, char> wew;
        wew['}'] = '{';
        wew[']'] = '[';
        wew[')'] = '(';
        
        for(auto i : s) {
            if(i == ')' || i == ']' || i == '}') {
                if(check.empty()) return false;
                else {
                    if(wew[i] != check.top()) return false;
                    else check.pop();
                }
            }
            else check.push(i);
        }
        return check.empty();
    }
};