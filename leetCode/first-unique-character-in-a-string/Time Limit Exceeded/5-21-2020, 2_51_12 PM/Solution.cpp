// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:    
    int firstUniqChar(string s) {
        int idx = -1;
        for(int i = 0; s[i] != '\0'; i++) {            
            if(count(s.begin(), s.end(), s[i]) == 1) {
                idx = i;
                break;
            }
        }  
        return idx;
    }
};