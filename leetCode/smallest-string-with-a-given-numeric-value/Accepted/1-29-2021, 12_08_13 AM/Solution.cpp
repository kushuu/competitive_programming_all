// https://leetcode.com/problems/smallest-string-with-a-given-numeric-value

class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans = "";
        for(int i = n; i > 0; i--) {
            int temp = min(26, k-i+1);
            ans += (char)('a'+temp-1);
            // cout << temp << " " << i << endl;
            k -= temp;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};