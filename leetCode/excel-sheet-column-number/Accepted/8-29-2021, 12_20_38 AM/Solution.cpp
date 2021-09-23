// https://leetcode.com/problems/excel-sheet-column-number

class Solution {
public:
    int titleToNumber(string bs) {
        if(bs == "") return 0;
        int ans = 0, bsbs = 0;
        reverse(bs.begin(), bs.end());
        for(auto i : bs) {
            ans += pow(26, bsbs)*(i - 'A' + 1);
            // cout << (i - 'A' + 1) << " " ;
            bsbs++;
        }
        return ans;
    }
};