// https://leetcode.com/problems/the-kth-factor-of-n

class Solution {
public:
    int kthFactor(int n, int k) {
        // vector<int> factors;
        // for(int i = 1; i <= n; i++) {
        //     if(n%i == 0) factors.push_back(i);
        // }
        // int size = factors.size();
        // // for(auto i : factors) cout << i << " " ;
        // if(size < k) return -1;
        // else return factors[k-1];
        for(int i = 1; i <= n; i++) {
            // cout << k << " " ;
            if(n%i == 0) {
                k--;
                if(!k) return i;
            }
        }
        return -1;
    }
};