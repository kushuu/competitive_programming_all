// https://leetcode.com/problems/maximum-number-of-balloons

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int check[26];
        memset(check, 0, sizeof(check));
        for(auto i : text) check[i-'a']++;
        
        int ans = 0;
        ans = min({check['b' - 'a'], check['a'- 'a'], check['l'- 'a']/2, check['o'- 'a']/2, check['n'- 'a']});
        return ans;
    }
};