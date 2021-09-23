// https://leetcode.com/problems/count-primes

class Solution {
public:
    int get_primes(int n) {
        bool check[n+1];
        memset(check, true, sizeof(check));
        for (int p = 2; p * p <= n; p++) {
            if (check[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    check[i] = false;
            }
        }

        int ans = 0;
        for (int p = 2; p <= n; p++)
            if (check[p]) ans++;
        return ans;
    }
    
    int countPrimes(int n) {
        if(n <= 2) return 0;
        return get_primes(n-1);
    }
};