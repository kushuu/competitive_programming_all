// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:    
    int firstUniqChar(string s) {
        int idx = -1;
        for(int i = 0; s[i] != '\0'; i++) {
            
            int count = 0;
            char ch = s[i];
            for(int j = 0; s[j] != '\0'; j++)   if(s[j] == ch)  count++;
            
            if(count == 1) {
                idx = i;
                break;
            }
        }  
        return idx;
    }
};