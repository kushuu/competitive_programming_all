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
            s.erase(s.begin() + s.find(')'));
            size--;
            close.erase(close.begin());
        }

        int open_size = open.size(), close_size = close.size();
        // cout << open_size << " " << close_size << endl;
        
        if(open_size > close.size()) {
            // for(auto i : open) cout << i << " " ; cout << "h\n";
            for(int i = 0; i < open_size-close_size; i++) {
                // cout << i << " " << s[open[i]] << endl;
                s.erase(s.begin() + s.find('('));
            }
        }
        else {
            // for(auto i : close) cout << i << " ";
            for(int i = 0; i < close_size-open_size; i++) {
                // cout << endl << close[i] << " " << s[close[i]] << " " ;
                s.erase(s.begin() + s.find(')'));
            }
        }
        return s;
    }
};