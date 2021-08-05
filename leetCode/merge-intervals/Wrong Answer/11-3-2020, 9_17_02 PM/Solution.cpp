// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() <=1 ) return intervals;
        sort(intervals.begin(), intervals.end());
        for(int i = 0; i < intervals.size()-1; i++) {
            // cout << i << " " ;
            if(intervals[i][1] >= intervals[i+1][0]) {
                intervals[i][1] = intervals[i+1][1];
                intervals.erase(intervals.begin()+1+i);
            }
        }
        return intervals;
    }
};