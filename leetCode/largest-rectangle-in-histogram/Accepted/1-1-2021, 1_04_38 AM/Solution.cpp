// https://leetcode.com/problems/largest-rectangle-in-histogram

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.empty()) return 0;
        
        
        // nice try bhai :)
        // int maxHt = (int)*max_element(heights.begin(), heights.end()), ans = 0;
        // for(int ht = 1; ht <= maxHt; ht++) {
        //     int cnt = 0, cont = 0, maxCont = 0;
        //     for(auto x : heights) {
        //         if(x >= ht) {
        //             cnt++;
        //             cont++;
        //             maxCont = max(maxCont, cont);
        //         }
        //         else {
        //             cont = 0;
        //         }
        //     }
        //     ans = max(ans, maxCont*ht);
        // }
        // return ans;
        
        stack<int> check;
        int size = heights.size();
        int ans = 0, tempArea = 0, i = 0;
        for(;i < size;) {
            if(check.empty() || heights[check.top()] <= heights[i]) 
                check.push(i++);
            else {
                    int top = check.top();
                    check.pop();
                    tempArea = heights[top]*(check.empty()? i : i - check.top() - 1);
                    ans = max(ans, tempArea);
                }
        }
        while (!check.empty()) { 
            int top = check.top(); 
            check.pop(); 
            tempArea = heights[top] * (check.empty() ? i : i - check.top() - 1); 

            ans = max(ans, tempArea);
        }
        return ans;
    }
};