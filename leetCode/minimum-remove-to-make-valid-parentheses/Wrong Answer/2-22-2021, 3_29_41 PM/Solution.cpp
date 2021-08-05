// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int size = s.size(), idx;
        stack<char> check;
        vector<int> open, close;
        for(int i = 0; i < size; i++) {
            if(s[i] == '(') {
                check.push('(');
                open.push_back(i);
                // cout << "hello?";
            }
            if(s[i] == ')') {
                close.push_back(i);
                if(!check.empty() and check.top() != ')') {
                    idx = i;
                }
                else if(!check.empty() and check.top() == '(') {
                    check.pop();
                }
                else {
                    cout << "hello?";
                    close.pop_back();
                    s.erase(s.begin()+i);
                    size--;
                }
            }
        }
        
        // for(auto i : open) cout << i << " " ; cout << endl;
        // cout << open.size() << endl;
        // for(auto i : close) cout << i << " " ; cout << endl;
        // cout << close.size() << endl;

        
        int open_size = open.size(), close_size = close.size();
        if(open_size == close_size) return s;
        
        if(open_size > close.size()) {
            for(int i = 0; i < open_size-close_size; i++) {
                s.erase(s.begin() + open[i] - i);
            }
        }
        else {
            for(int i = 0; i < close_size-open_size; i++) {
                // cout << s[close[i]] << " " ;
                s.erase(s.begin() + close[i] - i);
            }
        }
        if(s == "(") return "";
        return s;
    }
};