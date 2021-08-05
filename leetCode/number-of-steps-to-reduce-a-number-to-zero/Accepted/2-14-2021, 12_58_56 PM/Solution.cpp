// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

class Solution {
public:
    int numberOfSteps (int num) {
        int ans = 0;
        while(num) {
            if(num&1) num--;
            else num /= 2;
            ans++;
        }
        return ans;
    }
};