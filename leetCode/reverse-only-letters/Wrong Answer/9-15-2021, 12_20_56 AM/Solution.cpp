// https://leetcode.com/problems/reverse-only-letters

class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<pair<int, char>> check;
        int size = s.size();
        if(s.empty()) return "";
        for(int i = 0; i < size; i++) {
            if((int)s[i] >= 97 and (int)s[i] <= 122) check.push_back({i, s[i]});
        }
        
        size = check.size();
        for(int i = 0; i < size/2; i++) {
            swap(check[i].first, check[size-i-1].first);
        }
        
        for(auto i : check) s[i.first] = i.second;
        
        return s;
    }
};