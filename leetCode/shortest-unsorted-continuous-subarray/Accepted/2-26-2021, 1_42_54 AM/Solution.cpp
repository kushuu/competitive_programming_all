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
            max_so_far = max(max_so_far, arr[i]);
            if (arr[i] < max_so_far)
                rightIndex = i;
        }

        int min_so_far = INT_MAX;
        for (int i = size - 1; i >= 0; i--)
        {
            min_so_far = min(min_so_far, arr[i]);
            if (arr[i] > min_so_far)
                leftIndex = i;
        }
        
        if(leftIndex == -1 || rightIndex == -1) return 0;
        return abs(rightIndex-leftIndex)+1;
    }
};