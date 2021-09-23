// https://leetcode.com/problems/first-bad-version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1;
        while(first < n) {
            int mid = first + (n-first)/2;
            bool check = isBadVersion(mid);
            if(!check) first = mid+1;
            else n = mid;
        }
        return n;
    }
};