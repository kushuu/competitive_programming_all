// https://leetcode.com/problems/reverse-bits

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string check = bitset<32>(n).to_string();
        reverse(check.begin(), check.end());
        long ans = stoi(check, 0, 2);
        return ans;
    }
};