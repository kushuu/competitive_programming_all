// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fib(int n) {
        // 18ms runtime and 5.7MB space
        // if(n == 1 or n == 0) return n;
        // return fib(n-1)+fib(n-2);
        
        if(!n) return 0;
        vector<int> check(n);
        check[0] = 1; check[1] = 1;
        for(int i = 2; i < n; i++) check[i] = check[i-1]+check[i-2];
        return check[n-1];
    }
};