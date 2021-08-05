// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int sz = time.size(), ans = 0;
        int moduloKeep[60] = {0};
        for(auto x : time) {
            int modulo = x % 60;
            ans += moduloKeep[(60 - modulo) % 60];
            moduloKeep[modulo]++;
        }
        return ans;
    }
};