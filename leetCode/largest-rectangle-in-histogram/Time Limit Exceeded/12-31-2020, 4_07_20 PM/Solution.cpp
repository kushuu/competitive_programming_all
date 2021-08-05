// https://leetcode.com/problems/largest-rectangle-in-histogram

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.empty()) return 0;
        
        int maxHt = (int)*max_element(heights.begin(), heights.end()), ans = 0;
        for(int ht = 1; ht <= maxHt; ht++) {
            int cnt = 0, cont = 0, maxCont = 0;
            for(auto x : heights) {
                if(x >= ht) {
                    cnt++;
                    cont++;
                    maxCont = max(maxCont, cont);
                }
                else {
                    cont = 0;
                }
            }
            // cout << ht << "  " << cnt << " " << maxCont << endl;
            ans = max(ans, maxCont*ht);
        }
        return ans;
    }
};