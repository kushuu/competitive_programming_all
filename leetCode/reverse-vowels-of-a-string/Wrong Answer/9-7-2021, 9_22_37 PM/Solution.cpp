// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    string reverseVowels(string s) {
        vector<pair<int, char>> check;
        for(int i = 0; i < s.size(); i++) if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') check.push_back({i, s[i]});
        
        int size = check.size();
        for(int i = 0; i < size/2; i++) swap(check[i].first, check[size-i-1].first);
        
        for(auto i : check) s[i.first] = i.second;
        return s;
    }
};