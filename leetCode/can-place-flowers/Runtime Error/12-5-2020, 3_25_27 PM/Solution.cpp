// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans = 0, size = flowerbed.size();
        if(flowerbed[0] == 0 && flowerbed[1] == 0) ans++;
        for(int i = 1; i < size; i++) {
            if(flowerbed[i] == 0) {
                if(flowerbed[i-1] != 1 && flowerbed[i+1] != 1) {
                    ans++;
                    flowerbed[i] = 1;
                }
            }
        }
        return ans >= n;
    }
};