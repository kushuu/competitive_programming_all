// https://leetcode.com/problems/backspace-string-compare

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> fs, ft;
        for(int i = 0; i < S.size(); i++) {
            if(S[i] != '#')
                fs.push(S[i]);
            else {
                if(!fs.empty())
                    fs.pop();
            }
        }
        for(int i = 0; i < T.size(); i++) {
            if(T[i] != '#')
                ft.push(T[i]);
            else {
                if(!ft.empty())
                    ft.pop();
            }
        }
        return fs == ft;
    }
};