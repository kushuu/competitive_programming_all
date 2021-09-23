// https://leetcode.com/problems/reverse-only-letters

class Solution {
public:
    string reverseOnlyLetters(string s) {
//         vector<pair<int, char>> check;
//         int size = s.size();
//         if(s.empty()) return "";
//         for(int i = 0; i < size; i++) {
//             if(((int)s[i] >= 97 and (int)s[i] <= 122) or ((int)s[i] >= 65 and (int)s[i] <= 90) ) check.push_back({i, s[i]});
//         }
        
//         size = check.size();
//         for(int i = 0; i < size/2; i++) {
//             swap(check[i].first, check[size-i-1].first);
//         }
        
//         for(auto i : check) s[i.first] = i.second;
        
//         return s;
        int i = 0, j = s.length() - 1;
        
        while(i < j) {
            while(i < s.length() && !isalpha(s[i])) i++;
            while(j >= 0 && !isalpha(s[j])) j--;
            
            if(i >= j) break;
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};