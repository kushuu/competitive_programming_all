// https://leetcode.com/problems/ugly-number

class Solution {
public:
    bool isUgly(int n) {
        bool ans = false;
        while (n%2 == 0) {
            n = n/2;
            ans = true;
        } 

        for (int i = 3; i <= sqrt(n); i = i+2) { 
            while (n%i == 0) { 
                // printf("%d ", i);
                if(i <= 5) ans = true;
                n = n/i; 
            } 
        } 

        // if (n > 2) cout << n; 
        return true;
    }
};