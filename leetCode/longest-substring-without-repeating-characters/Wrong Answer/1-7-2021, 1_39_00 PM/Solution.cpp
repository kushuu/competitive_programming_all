// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        if(!size) return 0;
        
        set<char> check;
        int ans = -1, temp = 0;
        for(int i = 0; i < size; i++) {
            if(check.find(s[i]) == check.end()) {
                temp++;
                // cout << "temp: " << s[i] << " " << temp << endl;
                check.insert(s[i]);
            }
            else {
                // cout << s[i] << " " << temp << endl;
                ans = max(ans, temp);
                temp = 1;
                check.clear();
                check.insert(s[i]);
            }
        }
        // ans = max(ans, temp);
        return ans;
    }
};