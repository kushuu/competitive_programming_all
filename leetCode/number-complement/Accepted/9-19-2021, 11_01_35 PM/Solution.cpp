// https://leetcode.com/problems/number-complement

class Solution {
public:
    string ten_two(int n) {
        string ans = "";
        while(n) {
            if(n%2 == 1) ans += '0';
            else ans += '1';
            n /= 2;
        }
        return ans;
    }
    
    int two_ten(string n) {
        long long int ans = 0, pow = 1;
        for(auto i : n) {
            ans += pow*(i-'0');
            pow *= 2;
        }
        return ans;
    }
    
    int findComplement(int num) {
        string temp = ten_two(num);
        int ans = two_ten(temp);
        return ans;
    }
};