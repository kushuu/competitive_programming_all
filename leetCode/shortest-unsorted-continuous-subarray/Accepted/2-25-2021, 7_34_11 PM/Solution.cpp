// https://leetcode.com/problems/shortest-unsorted-continuous-subarray

class Solution {
public:
    int findUnsortedSubarray(vector<int>& arr) {
        int size = arr.size();
        if(!size || size == 1) return 0;

        int leftIndex = -1, rightIndex = -1;
        int max_so_far = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (max_so_far < arr[i])
                max_so_far = arr[i];
            if (arr[i] < max_so_far)
                rightIndex = i;
        }

        // traverse from right to left and keep track of the minimum so far
        int min_so_far = INT_MAX;
        for (int i = size - 1; i >= 0; i--)
        {
            if (min_so_far > arr[i])
                min_so_far = arr[i];

            // find the last position that is more than the minimum so far
            if (arr[i] > min_so_far)
                leftIndex = i;
        }
        // return r2l-l2r+1;
        // cout << leftIndex << " " << rightIndex;
        if(leftIndex == -1 || rightIndex == -1) return 0;
        return abs(rightIndex-leftIndex)+1;
    }
};