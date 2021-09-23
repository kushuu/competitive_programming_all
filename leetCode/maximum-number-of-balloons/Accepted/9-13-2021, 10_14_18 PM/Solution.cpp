// https://leetcode.com/problems/maximum-number-of-balloons

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> check;
        for(auto i : text) check[i]++;
        
        int ans = 0;
        ans = min({check['b'], check['a'], check['l']/2, check['o']/2, check['n']});
        return ans;
    }
};