// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        if(s == "") return true;
        int n = s.size();
        if(n == 1)  return false;
        stack<char> brackets;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[')
                brackets.push(s[i]);
            else {
                char c = brackets.top();
                if(s[i] == ')' && c != '(')   return false;
                if(s[i] == ']' && c != '[')   return false;
                if(s[i] == '}' && c != '{')   return false;
                else
                    brackets.pop();
            }
        }
        return true;        
    }
};