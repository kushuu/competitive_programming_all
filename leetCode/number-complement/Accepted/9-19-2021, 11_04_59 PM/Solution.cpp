// https://leetcode.com/problems/number-complement

class Solution {
public:
    int ten_two(int n) {
        int ans = 0;
        long int pow = 1;
        while(n) {
            if(n%2 == 1) ans += 0;
            else ans += pow;
            n /= 2;
            pow *= 2;
        }
        return ans;
    }
    
    // int two_ten(string n) {
    //     unsigned int ans = 0, pow = 1;
    //     for(auto i : n) {
    //         ans += pow*(i-'0');
    //         pow *= 2;
    //     }
    //     return ans;
    // }
    
    int findComplement(int num) {
        int temp = ten_two(num);
        return temp;        
    }
};