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
            }
            if(s[i] == ')') {
                close.push_back(i);
                if(!check.empty() and check.top() != ')') {
                    idx = i;
                }
                else if(!check.empty() and check.top() == '(') {
                    check.pop();
                }
            }
        }

        while(!close.empty() and close.front() < open.front()) {
            // cout << close.front() << " " << s << endl;
            s.erase(s.begin() + s.find(')'));
            size--;
            close.erase(close.begin());
        }
        // cout << "hello?";
        int open_size = open.size(), close_size = close.size();
        
        if(open_size > close.size()) {
            // for(auto i : open) cout << i << " " ; cout << "h\n";
            for(int i = 0; i < open_size-close_size; i++) {
                // cout << i << " " << s[open[i]] << endl;
                s.erase(s.begin() + s.find('('));
            }
        }
        else {
            // cout << "here";
            for(int i = 0; i < close_size-open_size; i++) {
                // cout << s[close[i]] << " " ;
                s.erase(s.begin() + s.find('('));
            }
        }
        return s;
    }
};