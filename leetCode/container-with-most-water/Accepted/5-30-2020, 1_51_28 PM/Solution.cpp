// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = -1;
        for(int i = 0, j = height.size()-1; i < j; ) {
            maxVol = max(maxVol, (j-i)*min(height[i], height[j]));
            (height[i] < height[j])? i++: j--;
        }
        return maxVol;
    }
};
static int fastio = []() {
    #define endl '\n'
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(0);
    return 0;
}();