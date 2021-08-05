// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = -1;
        for(int i = 0; i < height.size(); i++) 
            for(int j = i+1; j < height.size(); j++) {
                int vol = (j-i) * min(height[i], height[j]);
                maxVol = max(maxVol, vol);
            }
        return maxVol;
    }
};