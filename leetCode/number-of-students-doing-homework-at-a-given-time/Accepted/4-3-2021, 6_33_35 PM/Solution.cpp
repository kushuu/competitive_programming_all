// https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time

class Solution {
public:
    int busyStudent(vector<int>& start, vector<int>& end, int query) {
        int ans = 0, size = start.size();
        for(int i = 0; i < size; i++) {
            if(query >= start[i] and query <= end[i]) ans++;
        }
        return ans;
    }
};