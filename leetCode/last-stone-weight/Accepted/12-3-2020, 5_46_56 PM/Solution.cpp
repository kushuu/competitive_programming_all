// https://leetcode.com/problems/last-stone-weight

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> check(stones.begin(), stones.end());
        
        while(check.size() >= 2) {
            int y = check.top();
            check.pop();
            int x = check.top();
            check.pop();
            
            if(x != y) check.push(y-x);
        }
        if(check.empty()) return 0;
        return check.top();
    }
};