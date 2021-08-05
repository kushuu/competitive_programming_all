// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() <=1 ) return intervals;
        sort(intervals.begin(), intervals.end());
        stack<vector<int>> check;
        check.push(intervals[0]);
        
        for(int i = 1; i < intervals.size(); i++) {
            vector<int> top = check.top();
            if(top[1] < intervals[i][0])
                check.push(intervals[i]);
            else if(top[1] < intervals[i][1]) {
                top[1] = intervals[i][1];
                check.pop();
                check.push(top);
            }
        }
        vector<vector<int>> ans;
        while(!check.empty()) {
            ans.push_back(check.top());
            check.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};