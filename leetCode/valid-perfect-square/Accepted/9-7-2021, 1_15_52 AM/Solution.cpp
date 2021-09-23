// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1, end = num;
        while(start <= end) {
            long long mid = start + (end-start)/2, temp = mid*mid;
            if(temp == num) return true;
            if(temp < num) start = mid+1;
            else end = mid-1;
        }
        return false;
    }
};