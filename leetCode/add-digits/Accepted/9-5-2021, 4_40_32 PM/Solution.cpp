// https://leetcode.com/problems/add-digits

class Solution {
public:
    int func(int num) {
        int ans = 0;
        while(num) {
            ans += (num%10);
            num/=10;
        }
        return ans;
    }
    
    int addDigits(int num) {
        if(to_string(num).size() == 1) return num;
        return addDigits(func(num));
    }
};