// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = -1;
        for(int i = 0, j = height.size()-1; i < j; ) {
            maxVol = max(maxVol, (j-1)*min(height[i], height[j]));
            (height[i] < height[j])? i++: j--;
        }
        return maxVol;
    }
};