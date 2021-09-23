// https://leetcode.com/problems/word-pattern

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> ps;
        unordered_map<string, char> sp;
        
        vector<string> check;
        string temp = "";
        for(auto i : s) {
            if(i == ' ') {
                check.push_back(temp);
                temp = "";
            }
            else temp += i;
        }
        check.push_back(temp);
        
        int size = pattern.size();
        if(check.size() != size) return false;
        
        
        for(int i = 0; i < size; i++) {
            if(ps.find(pattern[i]) == ps.end()) ps[pattern[i]] = check[i];
            else if(ps[pattern[i]] != check[i]) return false;
            
            if(sp.find(check[i]) == sp.end()) sp[check[i]] = pattern[i]
            else if(sp[check[i]] != pattern[i]) return false;
        }
        return true;
    }
};