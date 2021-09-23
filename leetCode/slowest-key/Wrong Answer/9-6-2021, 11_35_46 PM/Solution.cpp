// https://leetcode.com/problems/slowest-key

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ans = keysPressed[0];
        int maxtime = releaseTimes[0];
        
        for(int i = 1; i < releaseTimes.size(); i++) {
            if(releaseTimes[i]-releaseTimes[i-1] > maxtime) {
                ans = keysPressed[i-1];
                maxtime = releaseTimes[i]-releaseTimes[i-1];
            }
        }
        return ans;
    }
};