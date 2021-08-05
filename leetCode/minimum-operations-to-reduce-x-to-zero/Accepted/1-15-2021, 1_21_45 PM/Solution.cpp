// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int res = -1, len = nums.size(), tot = 0;
        unordered_map<int, int> m;
        m[0] = -1;
        for (int i = 0; i < len && tot < x; i++) {
            m[tot += nums[i]] = i;
        }
        if (m[tot] == len - 1) return tot == x ? m[tot] + 1 : -1;
        if (tot == x) res = m[tot] + 1;
        tot = 0;
        for (int j = len - 1, lmt = res > -1 ? len - res : 0; j >= lmt && tot < x; j--) {
            if (m.find(x - (tot += nums[j])) != end(m)) {
                res = min(res > -1 ? res : len, m[x - tot] + 1 + len - j);
            }
        }
        return res;
    }
};