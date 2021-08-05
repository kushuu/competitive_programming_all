// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:    
    int firstUniqChar(string s) {
        int charCount[26] = {0};
        for(int i = 0; i < s.length(); i++)
            charCount[s[i] - 'a']++;
        for(int i = 0; i < s.length(); i++)
            if(charCount[s[i] - 'a']  == 1)
                return i;
        return -1;
                
    }
};