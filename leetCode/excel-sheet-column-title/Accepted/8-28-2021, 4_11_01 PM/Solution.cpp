// https://leetcode.com/problems/excel-sheet-column-title

class Solution {
public:
    string convertToTitle(int num) {
        string ans = "";
        while(num > 0) {
            int temp = num%26, tt = num/26;
            // cout << num << " " << temp << endl;
            if(temp == 0) {
                ans += 'Z';
                tt--;
                if(tt == 0) break;
                num = tt;
                continue;
            }
            ans += 'A' + temp - 1;
            num /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};