// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        if(!size) return 0;
        
        set<char> check, checkmax(s.begin(), s.end());
        if(checkmax.size() == size) return size;
        
        int ans = 1, temp = 0;
        for(int i = 0; i < size; i++) {
            // for(auto i : check) cout << i << " " ; cout << endl; 
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
        ans = max(ans, temp);
        return ans;
    }
};