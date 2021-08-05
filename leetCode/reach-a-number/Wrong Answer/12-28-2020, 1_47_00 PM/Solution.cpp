// https://leetcode.com/problems/reach-a-number

class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int ans = 0;
        while(target > 0) 
            target -= ++ans;
        // cout << target;
        return (target%2==0)? ans : ans+2;
    }
};