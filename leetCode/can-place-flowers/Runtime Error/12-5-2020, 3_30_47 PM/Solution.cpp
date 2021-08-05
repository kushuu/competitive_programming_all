// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans = 0, size = flowerbed.size();
        if(size == 1 && n > 1) return false;
        if(size == 1) {
            if(n == 1) {
                return flowerbed[0] == 0;
            }
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0) {
            ans++;
            flowerbed[0] = 1;
        }
        for(int i = 1; i < size-1; i++) {
            if(flowerbed[i] == 0) {
                if(flowerbed[i-1] != 1 && flowerbed[i+1] != 1) {
                    ans++;
                    flowerbed[i] = 1;
                }
            }
        }
        if(flowerbed[size-1] == 0 && flowerbed[size-2] == 0) ans++;
        // for(auto i : flowerbed) cout << i << " " ;
        return ans >= n;
    }
};