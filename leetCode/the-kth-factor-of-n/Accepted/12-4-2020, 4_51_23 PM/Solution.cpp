// https://leetcode.com/problems/the-kth-factor-of-n

class Solution {
public:
    int kthFactor(int n, int k) {
        if(!n) return -1;
        vector<int> factors;
        for(int i = 1; i <= n; i++) {
            if(n%i == 0) factors.push_back(i);
        }
        int size = factors.size();
        // for(auto i : factors) cout << i << " " ;
        if(size < k) return -1;
        else return factors[k-1];
    }
};