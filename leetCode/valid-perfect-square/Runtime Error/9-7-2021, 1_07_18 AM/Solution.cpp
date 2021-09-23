// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i = 1; i*1 <= num; i++) if(i*i == num) return true;
        return false;
    }
};