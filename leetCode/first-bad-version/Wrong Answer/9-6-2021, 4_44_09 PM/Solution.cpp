// https://leetcode.com/problems/first-bad-version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1) return 1;
        int first = 1, last = n, ans = 0;
        while(first < last) {
            int mid = first + (last-first)/2;
            bool check = isBadVersion(mid);
            if(!check) {
                first = mid+1;
            }
            else last = mid-1;
        }
        return last+1;
    }
};