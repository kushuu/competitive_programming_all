// https://leetcode.com/problems/simplify-path

class Solution {
public:
    string simplifyPath(string path) {
        int size = path.size();
        vector<string> split;
        stack<string> st;
        string temp = "";
        
        for(int i = 0; i < size; i++) {
            if(path[i] == '/') {
                if(temp != "") split.push_back(temp);
                temp = "";
            }
            else {
                temp += path[i];
            }
        }
        string ans = "/";
        for(auto i : split) cout << i << "*" ;
        for(auto i : split) {
            if(i == ".") continue;
            if(i == "..") {
                if(st.size() > 0) {
                    st.pop();
                }
                else continue;
            }
            else {
                // cout << st.size();
                st.push(i);
            }
        }
        split.clear();
        while(!st.empty()) {
            // cout << st.top();
            split.push_back(st.top());
            st.pop();
        }
        reverse(split.begin(), split.end());
        for(auto i : split) ans += i+'/';
        if(ans != '/') ans.pop_back();
        return ans;
    }
};